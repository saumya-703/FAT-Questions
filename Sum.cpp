#include <iostream>
using namespace std;

void Sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum= sum+arr[i];
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter the Value of N"<<endl;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Sum(arr,n);
}