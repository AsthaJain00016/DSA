//Print row index with maximum sum
#include<iostream>
using namespace std;
int main(){
    int arr[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    int ans=0, index=-1;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(ans<sum){
            ans=sum;
            index=i;
        }
    }
    cout<<index;
}