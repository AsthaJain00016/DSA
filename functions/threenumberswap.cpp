//here are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a.
// Do it using Function
#include<iostream>
using namespace std;
void reverse(int a ,int b, int c){
    int d=a;
    a=b;
    b=c;
    c=d;
    cout<<a<<" "<<b<<" "<<c;
}
int main(){
    reverse(12,25,2);

}