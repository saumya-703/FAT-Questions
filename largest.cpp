#include<iostream>
using namespace std;

void Largest(int arr[],int n){
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<<max;
}
int main(){
    int n;
    cout<<"Enter the Value of N"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Largest(arr,n);
}