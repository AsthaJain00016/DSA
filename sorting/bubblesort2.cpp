// bubble sort 
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,9,2,5,6,7,1};
    int n=sizeof(arr)/4;
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
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