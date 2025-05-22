// searching an element in row and column sorted matrix
#include<iostream>
using namespace std;
int main(){
    int matrix[5][5]={4,8,15,25,60,18,22,26,42,80,36,40,45,68,104,48,50,72,83,130,70,99,114,128,170};
    int n=5,m=5;
    int target=50;
    // binary search row wise
    for(int i=0;i<n;i++){
        if(matrix[i][0]<=target && target<=matrix[i][m-1]){
            int start=0,end=m-1,mid;
            while(start<=end){
                mid=start+(end-start)/2;
                if(matrix[i][mid]==target){
                    cout<<"Element found at index "<<i<<" "<<mid;
                    break;
                }
                else if(matrix[i][mid]<target){
                    start=mid+1;
                }
                else end=mid-1;
            }
        } 
    }
    cout<<endl;

    // another method more optimized having time complexity O(n+m)
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(matrix[i][j]==target){
            cout<<"Element found at index "<<i<<" "<<j;
            break;
        }
        else if(matrix[i][j]<target) i++;
        else j--;
    }
}