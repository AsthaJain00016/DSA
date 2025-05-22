//passing vector to the function
#include<iostream>
#include<vector>
using namespace std;
void printvector( const vector<int> &a){
    for(int i : a){
        cout<<i<<" ";
    }
}
int main(){
    vector<int>a={1,5,6,8,9,10};
    printvector(a);
}