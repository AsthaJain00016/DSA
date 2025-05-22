// longest palindrome
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="aaAAbbbAASJJ";
    vector<int>lowercase(26,0);
    vector<int>uppercase(26,0);
    // counting the frequency of alphabets 
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            lowercase[s[i]-'a']++;
        }
        else uppercase[s[i]-'A']++;
    }
    int ans=0;
    bool odd=0;
    for(int i=0;i<26;i++){
        if(lowercase[i]%2==0){
            ans+=lowercase[i];
        }
        else{
            ans+=lowercase[i]-1;
            odd=1;
        }

        if(uppercase[i]%2==0){
            ans+=uppercase[i];
        }
        else{
            ans+=uppercase[i]-1;
            odd=1;
        }
    }
    cout<<"The longest palindrome which can be generated from the given string is "<<ans+odd;

}