#include<iostream>
using namespace std;
int main(){
    char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout<<"the elements of the array are: ";
    int n=sizeof(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}