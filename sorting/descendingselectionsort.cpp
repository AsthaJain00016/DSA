// selection sort in descending order
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,5,6,8,9,4};
    for(int i=0;i<5;i++){
        int index=i;
        for(int j=i+1;j<6;j++){
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