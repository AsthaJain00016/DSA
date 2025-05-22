// program to find four elements having the sum equal to target value
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,5,1,0,6,0};
    int target = 7;
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    // brute force approch
    for(int i=0;i<n-3;i++){
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        for(int j=i+1;j<n-2;j++){
            if (j > j + 1 && arr[j] == arr[j - 1]) continue;
            for(int k=j+1;k<n-1;k++){
                if (k > k + 1 && arr[k] == arr[k - 1]) continue;
                for(int m=k+1;m<n;m++){
                    if (m > m+ 1 && arr[m] == arr[m - 1]) continue;
                    if(arr[i]+arr[j]+arr[k]+arr[m]==target){
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[m]<<" ";
                        break;
                    }
                }
            }
        }
    }
}