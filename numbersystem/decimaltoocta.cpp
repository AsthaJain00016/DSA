//program to convert decimal number to octa number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=0,rem;
    int mul=1;
    while(n){
        rem=n%8;
        n/=8;
        ans=rem*mul+ans;
        mul*=10;
    }
    cout<<ans;
}