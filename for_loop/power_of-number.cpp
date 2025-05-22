//program to calculate the power of the number
#include<iostream>
using namespace std;
int main(){
    int num,power;
    cout<<"enter the number:";
    cin>>num;
    cout<<"enter the power:";
    cin>>power;
    int result=1;
    for(int i=1;i<=power;i++){
        result=result*num;
    }
    cout<<num<<" raised to the power "<<power<<" is "<<result;
}