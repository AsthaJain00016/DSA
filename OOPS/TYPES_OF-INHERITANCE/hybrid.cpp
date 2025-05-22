// hybrid inheritance
#include<iostream>
using namespace std;
class student{
    public:
    void print(){
        cout<<"i am a student\n";
    }
};
class male{
    public:
    void maleprint(){
        cout<<"i am a male\n";
    }
};
class female{
    public:
    void femaleprint(){
        cout<<"i am a female\n";
    }
};
class boy: public student, public male{
    public:
    void boyprint(){
        cout<<"i am a boy\n";
    }
};
class girl: public student, public female{
    public:
    void girlprint(){
        cout<<"i am a girl\n";
    }
};
int main(){
    boy b;
    girl g;
    b.boyprint();
    b.maleprint();
    b.print();
    g.femaleprint();
    g.girlprint();
    g.print();
}