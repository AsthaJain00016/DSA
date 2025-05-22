//program to convert decimal number to binary
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you want to convert: ";
    cin>>n;
    int ans=0,rem ,mul=1;
    while(n){
        rem=n%2;
        n/=2;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans;
}