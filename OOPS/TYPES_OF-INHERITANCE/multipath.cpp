// multipath inheritance
#include<iostream>
using namespace std;
class human{
    public:
    string name;
    void display(){
        cout<<"My name is "<<name<<endl;
    }
};
class engineer : public virtual human{
    public:
    string specialization;
    void work(){
        cout<<"I have specialization in "<<specialization<<endl;
    }
};
class youtuber:public virtual human{
    public:
    int subscriber;
    void content(){
        cout<<"I have a subscriber family of "<<subscriber<<endl;
    }
};
class codeteacher : public engineer , public youtuber{
    public:
    int salary;
    codeteacher(){

    };
    codeteacher(string name, int subscriber, string specialization, int salary){
        this->name=name;
        this->subscriber=subscriber;
        this->specialization=specialization;
        this->salary=salary;
    }
};
int main(){
    codeteacher t("avika",50,"cse",5000);
    t.display();
}