//program to convert a to A
#include<iostream>
using namespace std;
char convert(char a){
   char ans= a-'a'+'A';
   return ans;
}
int main(){
    char a;
    cout<<"enter the character: ";
    cin>>a;
    cout<<convert(a);
}