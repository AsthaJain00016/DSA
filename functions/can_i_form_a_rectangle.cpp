// program to check whether can i form the rectangle with giiven inputs
#include<iostream>
using namespace std;
int main(){
    int a ,b,c,d;
    cout<<"enter the sides of rectanle: ";
    cin>>a>>b>>c>>d;
    if((a==b && c==d) || (a==c && b==d )|| (a==d && b==c) ){
        cout<<"the rectangle can be formed: ";
    }
    else cout<<"the rectangle cannot be formed";
}