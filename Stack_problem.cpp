#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int arr[5];

    public:
    Stack(){//Default Constructor
     top=-1;
     for(int i=0;i<5;i++){
        arr[i]=0;
     }
    }
     //Defining Functions
     bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
     }

     //Defining Function for checking Full
     bool isFull(){
        if(top==4){
            return true;
        }
        else{
            return false;
        }
     }

     void push(int val){
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
     }

     int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            int popvalue=arr[top];
            top--;
            return popvalue;
        }
     }
     void display(){
        cout<<"Stack Values: ";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
     }
};

int main(){
    Stack s;
    int a;
    cout<<"Size of Array";
    cin>>a;
    int n;
    cout<<"Enter the number of times you want to perform the operation: ";
    cin>>n;
    while(n!=0){
       int c;
       cout<<"Enter the choice: "<<endl;
       cout<<"1: To check is Stack is Empty: "<<endl;
       cout<<"2: To check is Stack is Full: "<<endl;
       cout<<"3: To Push the Element in Stack: "<<endl;
       cout<<"4: To Pop the element in Stack: "<<endl;
       cin>>c;
       switch(c){
        case 1:{
            cout<<s.isEmpty()<<endl;
            break;
        }
        case 2:{
            cout<<s.isFull()<<endl;
            break;
        }
        case 3:{
            int v;
            cout<<"Enter the element to be enetered in stack: "<<endl;
            cin>>v;
            s.push(v);
            break;
        }
        case 4:{
            cout<<s.pop()<<endl;
            break;
        }
       }
       n--;
    }
    s.display();
    }
