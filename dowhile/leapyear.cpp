// program to swap two numbers without using third variable
#include<iostream>
using namespace std;
int main(){
    int a=10; int b=20;
    cout<<"numbers before swapping are : "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"numbers after swaping are: "<<a<<" "<<b;
}