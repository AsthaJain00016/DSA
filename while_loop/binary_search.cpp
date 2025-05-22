// binary search 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/4;
    int key;
    cout<<"enter the element you want to search in the arrray: ";
    cin>>key;
    // binary search implementation
    int start=0, end=n-1,mid;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==key){
            cout<<"the elements is found at index "<<mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else end=mid-1;
    }

}