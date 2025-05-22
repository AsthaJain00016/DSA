//Swap 2 numbers a, b without using extra variables. Range of 10000<=a,b<=100000. 
#include<iostream>
using namespace std;
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
int main(){
    int a , b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    swap(a,b);
}
