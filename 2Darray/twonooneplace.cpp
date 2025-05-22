// program to store two numbers at one place
#include<iostream>
using namespace std;
int main(){
    int number , occurence;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the occurence of the number: ";
    cin>>occurence;
    int a=number +occurence*100;
    cout<<"the two numbers store at same place is "<<a;
    cout<<endl;
    cout<<"The number is "<<a%100;
    cout<<endl;
    cout<<"The occurence is "<<a/100;
}