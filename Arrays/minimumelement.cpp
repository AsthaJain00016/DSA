// minimum element of the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={4,2,3,5,6};
    // minimum element of the array
    int ans= INT_MAX;
    for(int i=0;i<=5;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<"the minimum element of the array is: ";
    cout<<ans<<endl;
    // maximum element of the array

    ans=INT_MIN;
    for(int i=0;i<=5;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<"the maximum element of the array is: ";
    cout<<ans;
}