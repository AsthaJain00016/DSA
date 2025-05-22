// program to transpose a matrix
#include<iostream>
using namespace std;
int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    // now transposing a matrix having time complexity O(n^2) & space comlexity O(n^2)
    int arr[4][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            arr[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // another method having space complexity O(1)
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}