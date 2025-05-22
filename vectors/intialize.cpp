#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4,2);
    vector<int>v2={1,2,3,4,5,6};
    // copy value of one vector to another
    // vector<int>b;
    // b=v2;
    // for(auto i:b){
    //     cout<<i<<" ";
    // }

    // binary search using stl
    cout<<binary_search(v2.begin(),v2.end(),6)<<endl;// return 0 1
    cout<<find(v2.begin(),v2.end(),99)-v2.begin();


}