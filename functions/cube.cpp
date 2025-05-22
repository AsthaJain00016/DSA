//program to calculate the cube of the number using function
#include<iostream>
using namespace std;
int cube(int n){
    return n*n*n;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"cube of "<<n<<" is: "<<cube(n);
}