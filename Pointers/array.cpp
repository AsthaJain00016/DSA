//creating an array using pointer
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *ptr=new int[n]; // creation of 1d array of n size
     
    //intialising values
    cout<<"Enter the values of the array: ";
    for(int i=0;i<n;i++){
        cin>>ptr[i]; // ptr[i]=*(ptr+i*4)
    }


    //  printing the values 
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    // printing the values from another method
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
    delete[]ptr; // for releasing the memory taken in heap

}