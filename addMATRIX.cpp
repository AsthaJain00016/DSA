//Program to add two matrices
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={2,3,4,5,0,1,2,3,1,2,6,4};
    int arr1[3][4]={3,4,1,2,2,2,2,0,1,3,5,4};
    int arr2[3][4];
    // printing both matrix
    cout<<"The first marix is: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The second matrix is: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    // adding two matrices and storing into third matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr2[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    cout<<endl;
    // printing the third matrix
    cout<<"The addition of both the matrices is: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}