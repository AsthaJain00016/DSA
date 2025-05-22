// segregate 0 and 1
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,0,1,0};
    // normal approach
    int n=sizeof(arr)/sizeof(arr[0]);
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) count0++;
        else count1++;
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<n;i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // two pointer approach
    int a[]={1,0,1,0,1,0};
    int start=0 ,end=n-1;
    while(start<end){
        if(a[start]==0){
            start++;
        }
        else{
            if(a[end]==0){
                swap(a[start],a[end]);
                start++,end--;
            }
            else end--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}