#include <iostream>
using namespace std;
#include <string.h>

class stack
{
    int top;
    char *elements;
    int capacity;

public:
    stack();
    stack(int);
    stack(const stack &);
    void operator=(const stack &);
    bool isfull();
    bool isempty();
    bool push(char);
    char pop();
    ~stack();
};

stack::stack() : top(-1), capacity(5) { elements = new char[capacity]; }

stack::stack(int size) : top(-1), capacity(size) { elements = new char[capacity]; }

stack::stack(const stack &S)
{
    top = S.top;
    capacity = S.capacity;
    elements = S.elements;
}

void stack::operator=(const stack &eS)
{
    top = eS.top;
    capacity = eS.capacity;
    elements = eS.elements;
}

bool stack::isfull()
{
    if (top + 1 == capacity)
        return true;
    return false;
}

bool stack::isempty()
{
    if (top == -1)
        return true;
    return false;
}

bool stack::push(char c)
{
    elements[++top] = c;
    return 0;
}

char stack::pop()
{
    if (elements[top] == '(') {
        top--;
        return 'A';
    }
    return ' ';
}

stack::~stack()
{
    delete[] elements;
}

int main()
{
    stack s, s1(5);
    stack s2 = s1;
    char string[20];
    int len, flag = 0;
    cin >> string;
    len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        if (string[i] == '(')
            s.push(string[i]);
        else if (s.pop() == ' ')
        {
            flag = 1;
            break;
        }
    }
    if (!s.isempty())
        flag = 1;
    if (flag == 0)
        cout << "Balanced";
    else
        cout << "Not balanced";
}