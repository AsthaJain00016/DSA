// program for linear search
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,6,8,9,10,11,5,12};
    int n=sizeof(arr)/4;
    int key;
    cout<<"enter the element you want to search in the array: ";
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"the element is found at index: "<<i;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"the element is not present in the array";
    }
}