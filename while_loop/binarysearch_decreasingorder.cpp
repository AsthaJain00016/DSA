// binary search program for the array which is sorted in decreasing order
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/4;
    int key;
    cout<<"enter the element you want to search in the array: ";
    cin>>key;
    int start=0, end=n-1, mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<"element is found at index: "<<mid;
            break;
        }
        else if(arr[mid]<key){
            end=mid-1;
        }
        else start=mid+1;
    }
}