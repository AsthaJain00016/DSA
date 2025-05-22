#include<iostream>
#include<vector>
using namespace std;
int main(){
    // create vector, declare
    vector<int>v;
    cout<<"size of vector "<<v.size()<<endl;
    cout<<"capacity of vector "<<v.capacity()<<endl;
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);
    cout<<"size of vector "<<v.size()<<endl;
    cout<<"capacity of vector "<<v.capacity()<<endl;
    // update value
    v[1]=6;
}