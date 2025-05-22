// binary search for searching an element
#include<iostream>
using namespace std;
int main(){
    int n=4,m=5;
    int matrix[4][5]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};
    int target=52;
    // brute force approach
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target){
                cout<<"element found! at index "<<i<<" "<<j;
                break;
            }
        }
    }
    cout<<endl;
    // binary search method time complexity O(n+logm)
    for(int i=0;i<n;i++){
        if(matrix[i][0]<=target && target<=matrix[i][m-1]){
            int start=0,end=m-1,mid;
            while(start<=end){
                mid=start+(end-start)/2;
                if(matrix[i][mid]==target){
                    cout<<"element found! at index "<<i<<" "<<mid;
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
    // another optimized method with binary search having time complexity O(log nm)
    int start=0,end=n*m -1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        int rowIndex=mid/m;
        int colIndex=mid%m;
        if(matrix[rowIndex][colIndex]==target){
            cout<<"element found at index "<<rowIndex<<" "<<colIndex;
            break;
        }
        else if(matrix[rowIndex][colIndex]<target){
            start=mid+1;
        }
        else end=mid-1;
    }
}