// passing array to function
#include<iostream>
using namespace std;
void print(int arr[][3],int row, int col){  // here it is necessary to pass the column value
     for(int i=0;i<row;i++){// in the function because it has to calculate the address
        for(int j=0;j<col;j++){// otherwise it will give unexpected answer
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }                       

}
int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    print(arr,4,3);
}