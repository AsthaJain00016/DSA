#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={2,6,4,3,8,5,1};
    //second maximum element of the array
    int max1=INT_MIN, secondmax=INT_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    for(int i=0;i<7;i++){
        if(max1!=arr[i]){
            secondmax=max(secondmax,arr[i]);
        }
    }
    cout<<secondmax;
    
    //second mininmum element of the array
    int min1=INT_MAX, min2=INT_MAX;
    for(int i=0;i<7;i++){
        if(arr[i]<min1) min1=arr[i];
    }
    for(int i=0;i<7;i++){
        if(min1!=arr[i]){
            min2=min(min2,arr[i]);
        }
    }
    cout<<min2;

}