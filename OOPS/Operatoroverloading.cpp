// Program to understand operator overloading
#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    complex(){

    }
    complex(int real , int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }

    complex operator +(complex &c){
        complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
};

int main(){
    complex a(4,2);
    complex b(5,3);
    a.display();
    b.display();
    complex c=a + b;  // for displaying this we have to do operator overloading otherwise it will give error
    c.display();
}