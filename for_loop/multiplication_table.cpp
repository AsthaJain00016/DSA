//multiplication table
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose table you want:";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}