//add string
#include<iostream>
#include<algorithm>
using namespace std;
string add(string num1 , string num2){
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    int sum , carry=0;
    string ans;
    while(index2>=0){
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry=sum/10;
        ans+='0'+sum%10;
        index2--,index1--;
    }
    while(index1>=0){
        sum=(num1[index1]-'0')+carry;
        carry=sum/10;
        ans+='0'+ sum%10;
        index1--;
    }
    if(carry) ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string num1="26583" , num2="698";
    if(num1.size()>num2.size()){
        cout<<add(num1,num2);
    }
    else cout<<add(num2,num1);

}