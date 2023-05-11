#include<iostream>
using namespace std;
int main(){
    //matrix 1
    int n,m;
    cin>>n>>m;
    int sum[n][m];
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the Elements for Matrix"<<i<<j<<endl;
            cin>>arr[i][j];
        }
    }

    //matrix 2
    int n1,m1;
    cin>>n1>>m1;
    int brr[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cout<<"Enter the Elements for Matrix 2"<<i<<j<<endl;
            cin>>brr[i][j];
        }
    }
   //Sum of two matrix
   if(n==n1 && m==m1){
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        sum[i][j]=arr[i][j]+brr[i][j];
     }
   }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
   }
   }
   else{
    cout<<"Invalid Matrix";
   }
}