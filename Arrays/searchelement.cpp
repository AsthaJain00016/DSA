#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,7,11,8,4};
    int x;
    cout<<"enter the element to be searched: ";
    cin>>x;
    int index=-1;
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            index= i;
            break;
        }
    }
    cout<<index;
}