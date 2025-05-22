//Largest sum among contiguous subarrays
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,4,-5,8,-12,7,6,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    // this strategy has time complexity of o(n^2)
    for(int i=0;i<n;i++){
        int prefix=0;
        for(int j=i;j<n;j++){
            prefix+=arr[j];
            maxi=max(maxi,prefix);
        }
    }
    cout<<"the largest sum among contiguous subarrays is: "<<maxi;

    // another method having time complexity of o(n) called KADANES ALGORITHM
    // int prefix=0;
    // for(int i=0;i<n;i++){
    //     prefix+=arr[i];
    //     maxi=max(maxi,prefix);
    //     if(prefix<0){
    //         prefix=0;
    //     }
    // }
    // cout<<"the largest sum among contiguous subarrays is: "<<maxi;
}