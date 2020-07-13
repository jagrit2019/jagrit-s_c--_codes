#include <iostream>
using namespace std;
#define SIZE 10
class stack{
int *arr;
int capacity;
int top;

public:
    stack(int size=SIZE);

    int size();
    int pop();
    int peek();
    void push(int);
    int isEmpty();
    int isFull();
};
stack::stack(int size){
arr = new int[size];
capacity=size;
top =-1;

}

void stack::push(int x){

    cout<<"Wait inserting "<<x<<" inside the stack"<<endl;
    arr[++top] = x;


}

int stack :: pop(){
    cout<<"Wait popping from the stack"<<endl;
   return arr[--top];

}
int stack :: peek(){
return arr[top];

}
int main(){
stack stk(4);
stk.push(1);
stk.push(2);


stk.pop();
cout <<stk.peek();
}
