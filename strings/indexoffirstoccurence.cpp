//  programm to find the index of the first occurence of the string
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str1="oniononionson";
    string str2="onions";
    int n=str1.size(),m=str2.size();
    vector<int>lps(str2.size(),0);
    int first=0,second=1;
    //time complexity O(n+m) spce O(m)
    while(second<m){
        if(str2[first]==str2[second]){
            lps[second]=first+1;
            first++,second++;
        }
        else{
            if(first==0){
                lps[second]=0;
                second++;
            }
            else{
                first=lps[first-1];
            }
        }
    }
    first=0,second=0;
    while(second<m && first<n){
        if(str1[first]==str2[second]){
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
      cout<<first-second;
    }
    else cout<<"not in the string";

    cout<<endl;
    // brute force method

    for(int i=0;i<n-m;i++){
        int first1=i,second1=0;
        while(second1<m){
            if(str2[second1]!=str1[first1]){
                break;
            }
            else{
                first1++,second1++;
            }
        }
        if(second1==m){
            cout<<first1-second1;
        }
    }
    

}