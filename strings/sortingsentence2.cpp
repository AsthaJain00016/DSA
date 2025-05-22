// sorting the sentence 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="is2 sentence4 This1 a3";
    vector<string>ans(10);
    string temp;
    int pos , count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
        else{
            pos=temp[temp.size()-1] - '0';
            temp.pop_back();
            ans[pos]=temp;
            count++;
            temp.clear();
        }
    }
    pos=temp[temp.size()-1] - '0';
            temp.pop_back();
            ans[pos]=temp;
            count++;
            temp.clear();

    for(int i=1;i<=count;i++){
        temp+=ans[i];
        temp+=" ";
    }
    temp.pop_back();
    cout<<temp;
}
