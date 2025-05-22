// program to find missing and repeating number in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={4,3,2,1,2,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    // this method has time complexity of O(n) and space complexity of O(n)
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    // missing element
    for(int i=0;i<n;i++){
        if(count[i]==0){
            cout<<"The missing element is "<<i+1;
            break;
        }
    }
    // repeated element
    for(int i=0;i<n;i++){
        if(count[i]==2){
            cout<<" The repeated element is "<<i+1;
            break;
        }
    }
    cout<<endl;
    // another method this method has time complexity of O(n) and space complexity of O(1)
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    // missing 
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            cout<<"The missing element is "<<i+1<<endl;
            break;
        }
    }
    // repeated
    for(int i=0;i<n;i++){
        if(arr[i]%n==2){
            cout<<"The repeated element is "<<i+1<<endl;
            break;
        }
    }

}