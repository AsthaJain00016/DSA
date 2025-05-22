//make a string palindrome add minimum characters at start  to make palindrome
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="aaaotcaakr";
    int n=s.size();

    // brute force method time complexity O(n^2)
    string temp="";
    for(int i=n-1;i>=0;i--){
        int start=0,end=i;
        bool palindrome=false;
        while(start<=end){
            if(s[start]==s[end]){
                start++,end--;
            }
            else{
                break;
            }
        }
        if(end<start){
            palindrome=true;
            break;
        }
        if(!palindrome){
            temp+=s[i];
        }
    }
    cout<<temp.size()<<endl;

    // another method with kmp algorithm 
    string rev=s;
    reverse(rev.begin(),rev.end());
    s=s+'$';
    s=s+rev;
    // lps nikalege reverse s ka
    vector<int>lps(s.size(),0);
    int first=0,second=1;
    while(second<s.size()){
        if(s[first]==s[second]){
            lps[second]=first+1;
            first++,second++;
        }else{
            if(first==0){
                second++;
            }
            else{
                first=lps[first-1];
            }
        }
    }
    cout<<n-lps[s.size()-1];

}