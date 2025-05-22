// search an element in 2-D array
#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x=11;
    // brute force method
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(x==arr[i][j]){
                cout<<"element found at index "<<i<<" "<<j;
                return 0;
            }
        }
    }
    cout<<"Element not found";
    return 0;
    
}