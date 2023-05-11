#include <iostream>
using namespace std;

class Queue{
    private:
    int front;
    int rear;
    int arr[5];

    Queue(){
    int front=-1;
    int rear=-1;
    for(int i=0;i<4;i++){
        arr[i]=0;
    }
    }
    
    bool isEmpty(){
        if(rear==-1 && front ==-1){
            return true;
        }
        else{
            return false;
         }
    }

    bool isFull(){
        if(rear==4){
            return true;
        }
        else{
            return false;
        }
    }

    void Enqeue(int val){//Insert the elements in the queue
    if(isFull()){
        cout<<"Queue is full"<<endl;
    }
    else if(isEmpty()){
        rear=0;
        front=0;
        arr[rear]=val;
    }
    else{
        arr[rear]=val;
        rear++;
    }
    }

    int Dequeue(){//Deletion of Elements in the queue
        if(isEmpty()){
            return 0;
        }
        else if(front==rear){
            int x=arr[front];
            arr[front]=0;
            front=-1;
            rear=-1;
            return x;
        }
        else{
            int z;
            z=arr[front];
            arr[front]=0;
            front++;
            return z;
        }
    }

};