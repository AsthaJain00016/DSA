// maximum differnce between the elements of the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={9,5,8,12,2,3,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int ans=INT_MIN;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         ans=max(ans,arr[j]-arr[i]);
    //     }
    // }
    // cout<<ans;
    
    // another method
    int minElement = arr[0];
    int maxDifference = INT_MIN;

    for (int i = 1; i < n; i++) {
        // Calculate the difference between the current element and the minimum element so far
        maxDifference = max(maxDifference, arr[i] - minElement);

        // Update the minimum element
        minElement = min(minElement, arr[i]);
    }

    cout << "Maximum difference between elements is: " << maxDifference << endl;

    return 0;
}