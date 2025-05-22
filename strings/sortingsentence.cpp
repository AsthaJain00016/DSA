// sorting the sentence , the word in the end contains the which shows the correct position 
// of that word we have to give the sorted sentence in the answer the position lies b/w 1-9
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="is2 sentence4 This1 a3";
    vector<string>ans(10);
    string temp; 
    int pos, count=0;
    int index=0;
    while(index<s.size()){
        if(s[index]==' '){
            pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            count++;
            temp.clear();

        }
        else{
            temp+=s[index];
        }
        index++;
    }
    pos=temp[temp.size()-1]-'0';
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