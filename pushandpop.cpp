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

// #include<iostream>
// using namespace std;
// int size=10;
// int arr[10];
// int top=-1;
// void push(){
//     if(top == size-1){
//         cout<<"Stack is full";
//     }

//     else{
//         int x;
//         cout<<"Enter a number to push :";
//         cin>>x;
//         top++;
//         arr[top]=x;
//          cout<<arr[top]<<endl;
//     }
// }
// // void display(){
// //     for(int i=0;i<=top;i++){
// //         cout<<arr[top]<<endl;

// //     }
// // }
// int main(){
// push();
// push();
// // display();

// }