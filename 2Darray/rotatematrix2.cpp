// print the rotate matrix after rotating it to 180 degree
#include<iostream>
using namespace std;
int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
// for rotating the matrix to 180 degree we have to roatate it twice 90degree

// transpose matrix
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
    // transpose matrix
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    // another method
    int matrix1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int ans[4][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[n-1-i][j]=matrix1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(ans[i][start],ans[i][end]);
            start++,end--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

    // another method

    int matrix2[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // coulumn wise reverse
    for(int j=0;j<n;j++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix2[start][j],matrix2[end][j]);
            start++,end--;
        }
    }
    // row wise reverse
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix2[i][start],matrix2[i][end]);
            start++,end--;
        }
    }
    // printing
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }


}