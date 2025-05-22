// check whether the given string is pangram or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string sentence="thequickbrownfoxjumpsoverthelazydog";
    vector<bool>alpha(26,0);
    for(int i=0;i<sentence.size();i++){
        int index=sentence[i]-'a';
        alpha[index]=1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==0){
            cout<<"not panagram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;
}