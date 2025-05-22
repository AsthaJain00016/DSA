// prefix sum
#include<iostream>
using namespace std;
int main(){
    int arr[]={6,4,5,-3,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
}