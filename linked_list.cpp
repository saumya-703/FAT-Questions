#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next= NULL;
    } 

    //Inserting the Elements
    void Insert_end(Node* &start, int val){
         Node* node = new Node(val);// Making node with the data values and addresses
         if(start== NULL){
            start=node;
         }
         Node* temp=start;
         while(temp->next== NULL){
            temp= temp->next; 
         }
         temp->next=node;
        }
};