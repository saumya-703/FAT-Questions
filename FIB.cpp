#include <iostream>
#include <vector>
using namespace std;

int fibonnaci(int n){
    vector<int> fibArr(n+1);
    fibArr[0] = 0;
    fibArr[1] = 1;

    for(int i=2;i<=n;i++){
        fibArr[i]=fibArr[i-1]+fibArr[i-2];
    }
    return fibArr[n];
}

int main(){
    int n;
    cin>>n;

    int val= fibonnaci(n);
    cout<<val;
}