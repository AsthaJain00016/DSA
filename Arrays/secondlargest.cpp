#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array must be greater than 3: ";
    cin>>n;
    if(n<3){
        cout<<"invalid choice enter the size greater than 3";
        return 0 ;
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
    int max1=INT_MIN, max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max1){
            max2=max(max2,arr[i]);
        }
    }
    cout<<"the second largest element of the array is: "<<max2;
}