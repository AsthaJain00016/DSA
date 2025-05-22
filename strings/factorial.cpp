// program to calculate factorials of large numbers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose factorial u want!";
    cin>>n;
    vector<int>ans(1,1);
    int res,carry=0;
    while(n>1){
        for(int i=0;i<ans.size();i++){
            res=ans[i]*n+carry;
            carry=res/10;
            ans[i]=res%10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry=carry/10;
        }
        n--;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}