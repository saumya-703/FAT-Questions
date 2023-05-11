#include<iostream>
using namespace std;

//Function for Finding doing searching of an elemenmt
int binary_search(int arr[],int l, int r, int x){
 if(r>=l){
    int mid= l+(r-l)/2;// Finding the Mid value of the Array

    if(arr[mid]==x){// If the value at arr[mid] is equal to the seaching element then return the index position
        return mid;
    }
    if(arr[mid]>x){
        return binary_search(arr,1,mid-1,x);//Usage of recursive function
    }
    return binary_search(arr, mid+1, r,x);
 }
 return -1;
}
int main(){
 int s;
 cout<<"Enter the Number of Elements: ";// Taking the inputs from the User
 cin>>s;
 int arr[s];
 for(int i=0;i<s;i++){// Taking the Array inputs from the User
    cout<<"Enter the "<< i<<"th element in the array: ";
    cin>>arr[i];
 }
 int x;
 cout<<"Enter the Element to be searched: ";// Enter the element to br searched
 cin>>x;
 int result= binary_search(arr,0,s-1,x);
 if(result == -1){
   cout<<"Elements is not present in the Array";
 }
 else{
    cout<<"Element is present at index "<<result;
 }
}
