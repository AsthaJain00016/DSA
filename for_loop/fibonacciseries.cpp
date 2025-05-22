//program to print fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int t1,t2,t3;
    t1=0;
    t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=3;i<=n;i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3<<" ";
    }
}
