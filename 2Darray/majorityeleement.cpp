// program to return majority element the majority element is the element that appears more 
// than n/2 times.
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,3,2,3,3,1,3,2,2,1,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int candidate , count=0;
// Moore 's voting algorithm
    for(int i=0;i<n;i++){
        if(count==0){
            count++;
            candidate=arr[i];
        }
        else{
            if(candidate==arr[i])
            count++;
            else count--;
        }
    }
    // verifying
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>n/2)
    cout<<candidate;
    else cout<<"NO candidate with majority";
}