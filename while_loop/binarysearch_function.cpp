// Function for binary search
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0, end=n-1, mid;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else end=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to search in the array: ";
    cin>>key;
    cout<<binarysearch(arr,n,key);
}