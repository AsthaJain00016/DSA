//insertion sort by taking inputs from the user
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the elements of array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //insertion sorting
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else
            break;
        }
    }
    cout<<endl<<"the elements of array after sorting are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}