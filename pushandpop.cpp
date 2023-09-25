#include <iostream>
using namespace std;
int arr[10];
int top = -1;
int size = 10;

void push()
{

    if (top == size - 1)
    {
        cout << "STack is full";
    }
    else
    {
        int x;
        cout << "Enter the Elemnet to Push :";
        cin >> x;
        top++;
        arr[top] = x;
    }
}

//display function displays the elemnets pushed into the stack
void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << endl;
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
    int n;
    cout << "Enter the total number of element u want to push :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        push();
    }

    display();

    cout << "Popped element from the top is : " << endl;
    
    pop();    //call the function pop as per ur need to pop or use a loop to pop
    pop();
}
