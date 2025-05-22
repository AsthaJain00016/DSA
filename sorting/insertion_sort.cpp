// insertion sorting 
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,9,8,7,6,1,2,3};
    int n=sizeof(arr)/4;
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    cout<<"array after sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}