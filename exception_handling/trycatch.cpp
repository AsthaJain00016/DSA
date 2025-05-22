// Exception Handling
#include<iostream>
using namespace std;
class invalidamounterror: public runtime_error{
    public:
    invalidamounterror(const string &msg): runtime_error(msg){

    }
};

class insufficientbalanceerror:public runtime_error{
    public:
    insufficientbalanceerror(const string &msg): runtime_error(msg){

    }
};
class Customer{
    string name;
    int balance , account_number;
    public:
    Customer(string name, int balance, int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }
    //deposit
    void deposit(int amount){
        if(amount<0){
            throw invalidamounterror("invalid amount");
        }
            balance+=amount;
            cout<<amount<<" rs credited successfully\n";
    }       
    //withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
        }
        else if(amount<0){
            throw invalidamounterror("invalid amount");
        }
        else {
            throw insufficientbalanceerror("insufficient balance");
        }
    }

};
int main(){
    Customer c1("Rohit",5000,10);
    try{
        c1.deposit(-2);
        c1.withdraw(10000);
    }
    catch(const invalidamounterror &e){
        cout<<"EXCEPTION OCCURED: "<<e.what(); 
    }
    catch(const insufficientbalanceerror &e){
        cout<<"EXCEPTION OCCURED: "<<e.what();
    }
    
}