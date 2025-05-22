//bubble sort 
#include<iostream>
using namespace std;
int main(){
    int arr[]={7,4,8,5,3};
    for(int i=3;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped++;
        }
        if(swapped==0){
            break;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}