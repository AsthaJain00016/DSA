// longest substring without repeating characters
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="ababcl";
    // first method is brute force method having time complexity O(n^3)
    int ans=0;
    string temp;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            temp.clear();
            vector<int>count(128,0);
            bool isunique=true;
            for(int k=i;k<=j;k++){
                if(count[s[k]]>0){
                    isunique=false;
                    break;
            }
            count[s[k]]++;
            temp+=s[k];
            }
            if(isunique){
                ans=max(ans,(int)temp.size());
            }
        }
    }
    cout<<ans;
    
    cout<<endl;
    // another method having time complexity O(n)
    vector<bool>count1(256,0);
    int first=0,second=0,length=0;
    while(second<s.size()){
        while(count1[s[second]]){
            count1[s[first]]=0;
            first++;
        }
        count1[s[second]]=1;
        length=max(length,second-first+1);
        second++;
    }
    cout<<length;
}