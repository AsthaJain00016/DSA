//PROBLEM STATEMENT:- the problem says any two  element of the array has the sum of 22 return these value
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,7,11,15,27};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=22;


    // two pointer approach time complexity o(n)
    int start=0,end=n-1;
    while(start<end){
        int sum=arr[start]+arr[end];
        if(sum==target){
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if(sum<target){
            start++;
        }
        else end--;
    }
    cout<<endl;

    // nested loops time complexity o(n^2)
    vector<int>ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    for(int i=0;i<2;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    // binary search time complexity o(nlogn)
    for(int i=0;i<n-1;i++){
        int start=i+1 , end=n-1 , mid;
        int x=target-arr[i];
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==x){
                cout<<arr[i]<<" "<<arr[mid];
                break;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else end=mid-1;
        }
    }
}