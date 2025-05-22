// program to calculate the length of string using pointer
#include<iostream>
using namespace std;
int calculateLength(const char*str){
    int length=0;
    while(*str!='\0'){
        length++;
        str++;
    }
    return length;
    }

int main(){
    const char *mystring="hello world!";
    cout<<"Length of the string: "<<calculateLength(mystring)<<endl;
}