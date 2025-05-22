// Making function for binary search and taking as input from the user and key also;
#include<iostream>
using namespace std;
int binarysearch(int n , int arr[],int key){
    int start=0 , end=n-1,mid;
    while(start<=end){
        int mid=start + (end-start)/2;
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
    cout<<"enter the element you want to find in the array: ";
    cin>>key;
    int ans=binarysearch(n,arr,key);
    if(ans==-1){
        cout<<"the element is not present in the array";
    }
    else cout<<"the element is found at index: "<<ans;
}