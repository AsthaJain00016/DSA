// program to convert roman numbers to integers the constraints are number will lies
//between [1-3999]
#include<iostream>
#include<string>
using namespace std;
int num(char c){
    if(c=='I') return 1;
    else if(c=='V') return 5;
    else if(c=='X') return 10;
    else if(c=='L') return 50;
    else if(c=='C') return 100;
    else if(c=='D') return 500;
    else return 1000;
}
int romantoint(string s){
    int sum=0,index=0;
    while (index<s.size()-1)
    {
        if(num(s[index])<num(s[index+1])){
            sum=sum-num(s[index]);
        }
        else{
            sum=sum+num(s[index]);
        }
        index++;
    }
    sum=sum+num(s[index]);
    return sum;
    
}
int main(){
    cout<<romantoint("LXX");
}