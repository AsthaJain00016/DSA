//applying binary search in a 2-d matrix in decreasing order
#include<iostream>
using namespace std;
int main(){
    int matrix[4][4]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5};
    int target=16;
    int n=4,m=4;// n is rows and m is columns
    int start=0,end=n*m-1, mid;
    while(start<=end){
        mid=start+(end-start)/2;
        int rowIndex=mid/m;
        int colIndex=mid%m;
        if(matrix[rowIndex][colIndex]==target){
            cout<<"element found at index "<<rowIndex<<" "<<colIndex;
            break;
        }
        else if(matrix[rowIndex][colIndex]<target){
            end=mid-1;
        }
        else start=mid+1;
    }
}