//prime number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n<2){
        cout<<"not prime";
        return 0;
    }
        for(int i=2;i<n-1;i++){
            if(n%i==0){
                cout<<"not prime";
                return 0;
            }
        }
        cout<<"prime";
}