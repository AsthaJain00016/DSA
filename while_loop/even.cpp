#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
}