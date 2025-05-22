// program to find the occurence of the number
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,5,3,1,2,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    // decreasing the values of array by 1
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    //finding the occurence and storing it with number
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    // printing the number and their occurence 
    for(int i=0;i<n;i++){
        cout<<"The number is "<<i+1<<" the occurence of this number is: "<<arr[i]/n;
        cout<<endl;
    }
}