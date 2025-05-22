// print the sum of diagonals of the matrix 
// the sum of the diagonals can be calculated if rows=cols
#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    int first=0 , second =0;
    for(int i=0;i<4;i++){
      first+=arr[i][i];
    }
    for(int i=0;i<4;i++){
            second+=arr[i][3-i];
    }
    cout<<first<<" "<<second;

}