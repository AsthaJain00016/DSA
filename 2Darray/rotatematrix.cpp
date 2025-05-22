// print the matrix after roatating it to 90 degree clockwise
#include<iostream>
using namespace std;
int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int ans[4][4];
    int n=4;
    // this approach has time complexity of O(n^2) and space complexity O(n^2)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-i-1]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    // another method having time complexity O(n^2) & space complexity O(1)
    // first we will do transpose of the given matrix
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // reversing the matrix
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }

    // printing the matrix after rotation till 90 degree
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}