//selection sort by taking character array as input from the user
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    if(n<3) {
    cout<<"enter the valid size (size must be greater than 3)";
    return 0;
    }
    cout<<"enter the elements of the array: ";
    char arr[n];
    //taking inputs for the array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array before sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //selection sort
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<endl;
    //printing the sorted array
    cout<<"array after sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}