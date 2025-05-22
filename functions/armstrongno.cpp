//armstrong number
#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
int power(int base,int exp){
    int result=1;
    for(int i=1;i<=exp;i++){
        result=result*base;
    }
    return result;
}

bool Armstrong(int num,int digit){
    int n=num, ans=0, rem;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans+power(rem,digit);
    }
    if(ans==num)
        return 1;
    else 
        return 0;
}

int main(){
    int num;
    cin>>num;
    //count digit
    int digit = countdigit(num);
    //armstrong number
    cout << Armstrong(num, digit);
}