#include<iostream>
using namespace std;

int Binary_search(int arr[], int l,int r, int x){
    if(r>=l){
        int mid=(l+(r-l)/2);
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return Binary_search(arr,1,mid,x);
        }
        return Binary_search(arr,mid+1,r,x);
    }
return -1;
}

int main(){
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
      cout<<"Enter the element at "<<i <<"th Element : ";
      cin>>arr[i];
    }
    int search;
    cout<<"Enter the element to be searched : ";
    cin>>search;

    int l=0;
    int r=size-1;
    int value=Binary_search(arr,l,r,search);
    if(value==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at location: "<<value;
    }
}