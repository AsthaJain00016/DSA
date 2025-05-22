#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // creating a simple 2-D vector
    vector<vector<int>>matrix;
    // creating a 2-D vector and giving rows and cols and intialise them with 2
    vector<vector<int>>matrix1(3,vector<int>(4,1));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix1[i][j]<<" ";
            
        }
    }
    cout<<endl;
    cout<<"rows= "<<matrix.size();
    cout<<"cols= "<<matrix[0].size();
}