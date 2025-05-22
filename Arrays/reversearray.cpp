#include<iostream>
using namespace std;
int main(){
    int arr[]={6,11,7,4,8,9};
    // reversing array using another array
    int arr2[6];
    for(int i=0;i<6;i++){
        arr2[i]=arr[i];
    }
    cout<<"the reverse array is: ";
    for(int i=5;i>=0;i--){
        arr[i]=arr2[i];
        cout<<arr[i]<<" ";
    }
    //reversing array without using another array
    int i=0 , j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"the reversed array is: ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}