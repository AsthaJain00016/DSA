// to print the address of char array
#include<iostream>
using namespace std;
int main(){
    char arr[5]="1234";
    char *ptr=arr;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;
    cout<<static_cast<void*>(arr)<<endl;
}