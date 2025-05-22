#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int sumn=n*(n+1)/2;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sumarr=0;
    for(int i=0;i<n;i++){
        sumarr+=arr[i];
    }
    int missing=sumn - sumarr;
    cout<<"the missing number is: "<<missing; 
}