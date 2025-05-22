#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    // Print the address of 0th index
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr+0<<endl;
    cout<<ptr<<endl;

    // print the address of second element
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //print the value of 0th index
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    //saare address ko print 
    for(int i=0;i<5;i++){
        cout<<arr+i<<" ";
    }
    cout<<endl;
    // saare value print
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    //printing all the values of array using pointer
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    //printing all the values of array using pointer by arithmetic operations ++ or--
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

}