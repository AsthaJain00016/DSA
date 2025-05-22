#include<iostream>
#include<cstring>
using namespace std;
int getlength(const char*str){
    int length=0;
    while(*str!='\0'){
        length++;
        str++;
    }
    return length;
}
bool isPalindrome(const char*str){
    int length=getlength(str);
    int start=0 , end=length-1;
    while(start<=end){
        if(str[start]!=str[end]){
            break;
        }
        else start++,end--;
    }
    if(end<start) return 1;
    else return 0;
}
int main(){
    const char *palindrome1="level";
    const char *palindrome2="hello";
    cout<<"is"<<palindrome1<<"a palindrome? "<<(isPalindrome(palindrome1)?"yes":"no")<<endl;
    cout<<"is"<<palindrome2<<"a palindrome? "<<(isPalindrome(palindrome2)?"yes":"no")<<endl;
}
