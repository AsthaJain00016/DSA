// check if the string is rotated by two places
#include<iostream>
using namespace std;
void rotateclockwise(string &s){
    char c=s[s.size()-1];
    int index=s.size()-2;
    while(index>=0){
        s[index+1]=s[index];
        index--;
    }
    s[0]=c;
}
void rotateanticlockwise(string &s){
    char c=s[0];
    int index=1;
    while(index<s.size()){
        s[index-1]=s[index];
        index++;
    }
    s[s.size()-1]=c;
}
int main(){
    string s="amazon",s2="azonam";
    if(s.size()!=s2.size()){
        cout<<"not equal";
        return 0;
    }
    string clockwise,anticlockwise;
    clockwise=s; anticlockwise=s;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);
    if(clockwise==s2){
        cout<<"equal";
        return 0;
    }

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);
    if(anticlockwise==s2){
        cout<<"equal";
        return 0;
    }

    cout<<"not equal";
    return 0;
}
