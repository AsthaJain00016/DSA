/* create a pointer which will store the address of last element. then print all
elements from the last index to 0th index wiht help of pointer*/
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[4];
    for(int i=4;i>=0;i--){
        cout<<*ptr<<" ";
        ptr--;
    }
}