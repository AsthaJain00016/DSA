// rotatng a matrix anticlockwise 90 degree
#include<iostream>
using namespace std;
int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    // transpose the matrix
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse the matrix column wise
    for(int j=0;j<n;j++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++,end--;
        }
    }
    // printing the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}