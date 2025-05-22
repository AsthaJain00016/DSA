// find two numbers in the array which has the difference of 45
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> arr={5,10,3,2,50,80};
    int n=arr.size();
    int diff=45;
    
    // brute force approach
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]==diff){
                cout<<arr[j]<<"  "<<arr[i];
            }
        }
    }
    cout<<endl;


    // binary search
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
    int start=i+1,end=n-1,mid;
    int x=arr[i]+diff;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==x){
            cout<<arr[i]<<" "<<arr[mid];
            break;
        }
        else if(arr[mid]<diff){
            start=mid+1;
        }
        else end = mid-1;
    }
    }
    cout<<endl;
     //two pointer approach doing both start and end in increment order
     int start=0,end=1;

     while(end<n){
        int ans=arr[end]-arr[start];
        if(ans==diff){
            cout<<arr[end]<<" "<<arr[start];
            break;
        }
        else if(ans<diff){
            end++;
        }
        else start++;
     }
     
}
