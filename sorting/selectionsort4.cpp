//Selection Sort Algorithm to sort the array of integers in increasing order
// by taking the highest number to last place.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,6,5,3,2,4};
    for(int i=5;i>0;i--){
        int index=i;
    for(int j=0;j<i;j++){
        if(arr[j]>arr[index]){
            index=j;
        }
    }
    swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}