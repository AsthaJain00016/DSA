//nim game the one who removes the last stone will win check if you start the game can you win or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n" ;
    cin>>n;
    if(n%4==0) cout<<"you cannot win the game ";
    else cout<<"you will win";
}