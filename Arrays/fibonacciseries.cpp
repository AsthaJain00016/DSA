//fibonacci series using arrays
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    cout<<"the fibonacci series is: "<<arr[0]<<" "<<arr[1]<<" ";
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]<<" ";
    } 
}