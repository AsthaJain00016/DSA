#include<iostream>
using namespace std;
int main(){
    string s="Astha";

    // finding size of string without using s.size() function
    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<"the size is "<<size<<endl;
    // reversing the string 
    int start=0,end=size-1;
    while(start<end){
        swap(s[start],s[end]);
        start++, end--;
    }
    cout<<s<<endl;


    // checking whether the string is palindrome or not
    string s2="12321";
    start=0 ,end=s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<"the string is not palindrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"the string is palindrome";
}