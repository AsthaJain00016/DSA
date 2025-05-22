//repeated string matching 
#include<iostream>
#include<vector>
using namespace std;
int KMP_match(string a, string b){
    int n=a.size(),m=b.size();
    //lps nikalge b ka 
    vector<int>lps(m,0);
    int first=0,second=1;
    while(second<m){
        if(b[first]==b[second]){
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
    //serching b in a
    first=0,second=0;
    while (second<m && first<n){
        if(a[first]==b[second]){
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
        return 1;
    }
    else{ 
        return 0;
    }
}
int main(){
    string a="abcd",b="cdabcdab";
    string temp=a;
    int repeat = 1;
    // string a ko tab tak repeat krna hai jb tk vo b ke size ke equal ya badi na ho
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }

    //check substring KMP pattern search
    if(KMP_match(temp,b)==1){
        cout<<"found by "<<repeat<<" repeats";
    }

    // agar pehle baar mai na ho to fr ik baar repeat krke check krna h 
    // temp+=a kmp pattern search
    else if(KMP_match(temp+a,b)==1){
        cout<<"found by "<<repeat+1<<" repeats";
    }
    else  cout<<"not found ";
}