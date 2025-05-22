// program to divide the array in two subarrays of equal sum
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,-2,5,8,20,-10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    // // brute force approach having time complexity o(n^2)
    
    // for(int i=0;i<n-1;i++){
    //     int sum1=0, sum2=0;
    //     for(int j=0;j<=i;j++){
    //         sum1+=arr[j];
    //     }
    //     for(int j=i+1;j<n;j++){
    //         sum2+=arr[j];
    //     }
    //     if(sum1==sum2){
    //         cout<<"array can be divide into two subarrays of equal sum ";
    //         return 0;
    //     }
    // }
    // cout<<"array cannot be divide into two subarrays of equal sum ";
    // return 0;


    // another startegy having time complexity o(n)
    int totalsum=0,prefix=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        int ans=totalsum-prefix;
        if(ans==prefix){
            cout<<"array can be divide into two subarrays of equal sum ";
            return 0;
        }
    }
    cout<<"array cannot be divide into two subarrays of equal sum ";
    return 0;
}