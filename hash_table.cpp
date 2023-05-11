#include<iostream>
using namespace std;

void hashvalue(int arr[], int s){
    int index[s];
    for(int i=0;i<s;i++){
        index[i]=0;
    }
    for(int i=0;i<s;i++){
        int val=arr[i]%s;
        if(index[val]==0){
            index[val]=arr[i];
        }
        else{
            for(int j=1;j<s;j++){
                int newval=(arr[i]+j)%s;
                if(index[newval]==0){
                    index[newval]=arr[i];
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<index[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    hashvalue(arr, size);
}