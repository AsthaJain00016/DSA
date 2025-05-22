//binary to decimal
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int ans=0,rem;
    int mul=1;
    while (num)
    {
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
    
}