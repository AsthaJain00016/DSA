// 3 sum  
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,45,6,10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=13;
    // brute force method having time complexity n^3
    // for(int i=0;i<n-2;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(arr[i]+arr[j]+arr[k]==target){
    //                 cout<<"three elements found which will give the output equal to target ";
    //                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
    //                 return 1;
    //             }
    //         }
    //     }
    // }
    // cout<<"not found";

    // sorting the array
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // another method having time complexity n^2logn
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int find=target-arr[i]-arr[j];
            int start=j+1 , end=n-1, mid;
            while(start<end){
                mid=start+(end-start)/2;
                if(arr[mid]==find){
                    cout<<"elements found "<<arr[i]<<" "<<arr[j]<<" "<<arr[mid];
                    break;
                }
                else if(arr[mid]>find) end--;
                else start++;
            }
        }
    }




   // two pointer approach having time complexity o(n^2)
    for(int i=0;i<n-2;i++){
        int ans=target-arr[i];
        int start=i+1 ,end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans){
                cout<<"found";
                break;
            }
            else if(arr[start]+arr[end]>ans){
                end--;
            }
            else start++;
        }
    }
}