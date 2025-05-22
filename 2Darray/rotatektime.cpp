// rotate a matrix k time 
#include<iostream>
using namespace std;
void rotate90(int matrix[4][4],int n){
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
}
int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    int k;
    cout<<"enter how many times ypu want to rotatae the matrix: ";
    cin>>k;
    k=k%4;
    while(k){
        rotate90(matrix,n);
        k--;
    }

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}