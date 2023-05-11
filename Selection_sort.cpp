#include <iostream>
using namespace std;

void selection_sort(int arr[], int s){
    int index=0;
    int temp=0;int min=0;
    for(int i=0;i<s;i++){
        min=i;
        for(int j=i+1;j<s;j++){
            if(arr[j]<=arr[min]){
                min=j;
            }
            else{
                continue;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

     cout<<"sorted array= ";
    for(int i=0;i<s;i++){
        cout<<"The value of the Hash Table at "<<i <<arr[i]<<" ";
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
    selection_sort(arr,size);
}