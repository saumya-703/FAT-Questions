#include<iostream>
using namespace std;

void bubble_sort(int arr[], int s){
    int temp=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else {
                continue;
            }
        }
    }
    cout<<"sorted array= ";
    for(int i=0;i<s;i++){
        cout<<arr[i]+" ";
    }
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
    bubble_sort(arr,size);
}