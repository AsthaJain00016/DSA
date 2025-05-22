//single level inheritance
#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;
    public:
    void work(){
        cout<<"i am working";
    }
};
class student: public human{
    int roll_number,fees;
    public:
    student(string name, int age, int roll_number, int fees){
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees;
    }
};
int main(){
    student a("astha",20,66,25000);
    a.display();
}