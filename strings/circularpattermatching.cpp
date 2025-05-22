//circular pattern matching 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="cdeabroab", str="abcde";
    int n=s.size();
    int m=str.size();
    // repeat the string s=s+s
    s=s+s;
    //now search secind string in the follwing by string patter matching KMP
    vector<int>lps(m,0);
    int first=0,second=1;
    //finding lps of second string
    while(second<m){
        if(str[first]==str[second]){
            lps[second]=first+1;
            first++,second++;
        }
        else{
            if(first==0){
                second++;
            }
            else{
                first=lps[first-1];
            }
        }
    }
    // searching second string in the first one
    first=0,second=0;
    while(second<m && first<s.size()){
        if(s[first]==str[second]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
    if(second==m){
        cout<<"found";
    }
    else cout<<"not found";
}
