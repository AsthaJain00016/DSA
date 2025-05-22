//multilevel inheritance
#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    public:
    void introduce(){
        cout<<"hello my name is: "<<name<<endl;
    }
};
class employee: public person{
    protected:
    int salary; 
    public:
    void monthly_salary(){
        cout<<"my monthly salary is: "<<salary<<endl;
    }
};
class manager: public employee{
    public:
    string department;
    manager(string name, int salary, string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work(){
        cout<<"i am leading the department: "<<department<<endl;
    }
};
int main(){
    manager m("John",10000,"Finance");
    m.introduce();
    m.monthly_salary();
    m.work();
}