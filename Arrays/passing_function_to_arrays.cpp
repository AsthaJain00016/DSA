// passing functions to array
#include<iostream>
using namespace std;
void fun(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={2,5,6,7,8};
    fun(arr,5);
}