// sorting the string
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="abjkrghdrtxhdeh";

    // this method has time complexity O(n)
    vector<int>alpha(26,0);
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    s="";
    for(int i=0;i<26;i++){
        char c=i+'a';
        while(alpha[i]){
            s+=c;
            alpha[i]--;
        }
    }
    cout<<s;
}