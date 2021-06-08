#include <stdio.h>

int number, no[50], balance[50];
char name[50][100];

void withdraw();
void deposit();
void bal();

int main(){
    printf("\n===Banking Application===\n\nAccount Creation Process:\nEnter the number of account-holders:");
    scanf("%d", &number);
    for (int i = 0; i < number; i++){
        printf("Enter the account number:\n");
        scanf("%d", &no[i]);
        printf("Enter the name:\n");
        scanf("%s", &name[i]);
        printf("Enter the balance:\n");  
        scanf("%d", &balance[i]);}
    int check;
    do{
        printf("\n1. Cash Deposit ");
        printf("\n2. Cash Withdraw");
        printf("\n3. Balance Enquiry");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &check);
        switch (check){
        case 1: deposit();
            break;
        case 2: withdraw();
            break;
        case 3: bal();
            break;
        case 4: break;
        default: printf("Choose a valid option!");}
        }while (check != 4);
    return 0;
}

void withdraw(){
    int cid, s;
    printf("Enter the account number:\n");
    scanf("%d", &cid);
    printf("Enter the amount to be withdrawn:\n");
    scanf("%d", &s);
    for (int c = 0; c < number; c++){
        if (cid == no[c]){
            if (balance[c] - s > 500){
                printf("\n\nAccount Number: %d", no[c]);
                printf("\nName: %s", name[c]);
                printf("\nBalance: %d\n", balance[c] - s);}
            else{printf("Insufficient Balance\n");}}}}

void deposit(){
    int cid, p;
    printf("Enter the account number:\n");
    scanf("%d", &cid);
    printf("Enter the amount to be deposited:\n");
    scanf("%d", &p);
    for (int c = 0; c < number; c++){
        if (cid == no[c]){
            balance[c] += p;
            printf("%d\n%s\n%d", no[c], name[c], balance[c]);}}}

void bal(){
    int cid;
    printf("Enter the account number:\n");
    scanf("%d", &cid);
    printf("\nBalance Checker: ");
    for (int c = 0; c < number; c++){
        if (cid == no[c]){
            printf("\n\nAccount Number: %d", no[c]);
            printf("\nName: %s", name[c]);
            printf("\nBalance: %d\n", balance[c]);}}}
