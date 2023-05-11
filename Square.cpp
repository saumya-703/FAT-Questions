#include<iostream>
using namespace std;
int square(int arr[],int i){
    int sq= arr[i]*arr[i];
    return sq;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sq[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sq[i]=square(arr,i);
    }

    for(int i=0;i<n;i++){
        cout<<sq[i]<<" ";
    }
}