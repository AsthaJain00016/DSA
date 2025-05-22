#include<iostream>
using namespace std;
void inc(int *ptr){// pass by pointer
    *ptr=*ptr+1;
}
void increment(int p){//this is pass by value
    p=p+1;
}
void incre(int &p){// this is pass by reference
    p=p+1;
}
int main(){
    int num=10;
    inc(&num);// pass by pointer
    cout<<num;
    cout<<endl;
    int arr[5]={1,2,3,4,5};
    cout<<"arr= "<<arr<<endl;
    cout<<"&arr= "<<&arr;
}