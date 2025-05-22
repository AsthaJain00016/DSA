// product pair 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>V={5,10,3,2,50,80};
    int n=V.size();
    int target=30;
    sort(V.begin(),V.end());
    int start=0,end=n-1;
    while(start<end){
        int ans =V[start] * V[end];
        if(ans==target){
            cout<<V[start]<<" "<<V[end]<<" are the pairs which will give the answer equal to target";
            break;
        }
        else if(ans<target){
            start++;
        }
        else end--;
    }
}