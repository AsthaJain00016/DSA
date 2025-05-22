//hierarchial inheritance
#include<iostream>
using namespace std;
class human{
    public:
    string name;
    void display(){
        cout<<"my name is: "<<name<<endl;
    }
};
class teacher: public human{
    public:
    int salary;
    teacher(string name,int salary){
        this->name=name;
        this->salary=salary;
    }
    void show(){
        display();
        cout<<"my salary is: "<<salary;
    }
};
class student: public human{
    public:
    int fees;
    student(string name,int fees){
        this->name=name;
        this->fees=fees;
    }
    void see(){
        display();
        cout<<"my fees is: "<<fees;
    }
};
int main(){
    teacher t("Disha",2500);
    t.show();
    cout<<endl;
    student s("Diya",250);
    s.see();
}