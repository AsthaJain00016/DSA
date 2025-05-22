// bubble sorting program in decreasing order
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<"the array before sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sorting
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped++;
            }
        }
        if(swapped==0){
            break;
        }
    }
    cout<<"the array after sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 