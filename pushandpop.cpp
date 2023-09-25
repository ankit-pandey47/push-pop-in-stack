#include <iostream>
using namespace std;
int arr[10];
int top = -1;
int size = 10;

void push(int x)
{

    if (top == size - 1)
    {
        cout << "STack is full";
    }
    else
    {

        top++;
        arr[top] = x;
        cout << arr[top] << endl;
    }
}

// pop function to remove element
void pop()
{

    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << arr[top] << endl;
        top--;
    }
}
int main()
{
    push(1);
    push(12);

    cout << "Popped element from the top is : " << endl;

    pop();
}

 
