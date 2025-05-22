// program to defanging an IP address
#include<iostream>
using namespace std;
int main(){
    string s="255.100.25.60",ans;
    int index=0;
    // time complexity O(n) and space complexity O(n)
    while(index<s.size()){
        if(s[index]=='.'){
            ans+="[.]";
        }
        else ans+=s[index];
        index++;
    }
    cout<<ans;
}