//smallest distinct window
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="AABBBCBBAC";
    vector<int>count(256,0);
    int diff=0,first=0,second=0;
    int len=s.size();
    while (first<s.size()){
        if(count[s[first]]==0) diff++;
        count[s[first]]++;
        first++;
    }
    for(int i=0;i<256;i++){
        count[i]=0;
    }
    first=0;
    while(second<s.size()){
        //second vale ko tab tak bdha na hai jb tk diff 0 nhi hota hai
        while(diff && second<s.size()){
            if(count[s[second]]==0){
                diff--;
            }
            count[s[second]]++;
            second++;
        }
        len=min(len,second-first);
        //first vaale ko tab tak bdhana hai jab tak diff 1 nhi hota 
        while(!diff){
            len=min(len,second-first);
            count[s[first]]--;
            if(count[s[first]]==0) diff++;
            first++;
        }
    }
    cout<<len;
}