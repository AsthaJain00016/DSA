//multiple inheritance
#include<iostream>
using namespace std;
class engineer{
    public:
    string specialization;
    void work(){
        cout<<"I have specialization in "<<specialization<<endl;
    }
};
class youtuber{
    public:
    int subscriber;
    void content(){
        cout<<"I have a subscriber family of "<<subscriber<<endl;
    }
};
class codeteacher : public engineer , public youtuber{
    public:
    string name;
    codeteacher(string name, int subscriber, string specialization){
        this->name=name;
        this->subscriber=subscriber;
        this->specialization=specialization;
    }
    void show(){
        cout<<"My name is "<<name<<endl;
        work();
        content();
    }
};
int main(){
    codeteacher t("Riya",5000,"CSE");
    t.show();
}