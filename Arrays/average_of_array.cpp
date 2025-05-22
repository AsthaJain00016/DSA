#include<iostream>
using namespace std;
int main(){
    int arr[18];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<18;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<18;i++){
        sum+=arr[i];
    }
    int average=sum/18;
    cout<<"the average of the elements of arrray is: "<<average;
}