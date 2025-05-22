//longest prefix suffix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="ABCDEABCD";
    int n=s.size(),ans=0;
    // brute force method time complexity O(n^2) and space complexity O(n.)
    string prefix="",suffix="";
    int index=0;
    while(index<n-1){
        prefix=prefix+s[index];
        suffix=s[n-index-1]+suffix;
        if(prefix==suffix){
            ans=max(ans,(int)prefix.size());
        }
        
        index++;
    }
    cout<<ans;
    cout<<endl;
    // KMP algorithm
    string str="ABCABDABCABDABDAB";
    vector<int>lps(str.size(),0);
    int pre=0,suf=1;
    while(suf<str.size()){
        if(str[pre]==str[suf]){
            lps[suf]=pre+1;
            pre++,suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else{
                pre=lps[pre-1];
            }
        }
    }
    cout<<lps[str.size()-1];
}