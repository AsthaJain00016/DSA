//selection sort(ascending order)
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,8,2,3,1,4};
    for(int i=0;i<5;i++){
        int index=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<"array after sorting is: ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}