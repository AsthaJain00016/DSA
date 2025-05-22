// Program to reverse each row of the matrix
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={2,3,4,5,1,2,6,8,4,9,3,2};
    int row=3 , col=4;
    for(int i=0;i<row;i++){
        int start=0 , end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++ , end--;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}