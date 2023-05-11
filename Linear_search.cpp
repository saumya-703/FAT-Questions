#include<iostream>
using namespace std;
int linear_search(int arr[], int s, int x){
     for(int i=0;i<s;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int s,x;
    cout<<"Enter the size of the array: ";
    cin>>s;

    int arr[s];
    for(int i=0;i<s;i++){
        cout<<"Enter is the element at index "<<i<<": ";
        cin>>arr[i];
    }

    int val;
    cout<<"Enter the element to be search: ";
    cin>>val;
    int c=linear_search(arr,s,val);
    if(c==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index: "<<c;
    }
}
