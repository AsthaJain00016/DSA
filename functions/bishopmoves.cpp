// bishop moves count for 8*8 chess board
#include<iostream>
using namespace std;
int main(){
    int A , B;
    cout<<"enter the position of bishop: ";
    cin>>A>>B;
    int count=0;
    count = count + min(8-A,8-B);
    count =count + min(8-A,B-1);
    count = count + min(A-1,B-1);
    count = count + min(A-1,8-B);
    cout<<count;
}