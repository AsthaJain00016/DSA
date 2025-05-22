#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the sizze of the array (the size must be greater than 3): ";
    cin>>n;
    if(n<3){
        cout<<"invalid size the size must be greater than 3";
        return 0;
    }
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the elemnts of the array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min1=INT_MAX, min2=INT_MAX, min3=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min1=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=min1){
            min2=min(min2,arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=min1 && arr[i]!=min2){
            min3=min(min3,arr[i]);
        }
    }
    cout<<"the third minimum element of the array is: "<<min3;
}