#include <iostream>
using namespace std;

void ss(int arr[], int s){
    int min=0;
    int temp=0;
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

}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[size];
    }
    ss(arr,size);
}