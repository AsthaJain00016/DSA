// Design a bank customer clas for a bank system that manages customer information and basic operations
#include<iostream>
using namespace std;
class Bank_customer{
    private:
    string name;
    int accountNumber;
    double accountBalance;
    bool isactive;
    public:
    //getting details of account holder
    void getter(string c_name, int accnum, double accBal, bool active=true){
        name=c_name;
        accountNumber=accnum;
        accountBalance=accBal;
        isactive=active;
    }
    //deposit
    void deposit(double amount){
        if(!isactive){
            cout<<"account is inactive amount cannot be added!";
            return;
        }
        if(amount<=0){
            cout<<"invalid amount";
            return;
        }
            accountBalance=accountBalance + amount;
            cout<<"amount added Successfully! ";
    
    }
    //withdraw
    void withdraw(double amount){
        if(!isactive){
            cout<<"account is not active amount cannnot ve withdrawed";
            return;
        }
        if(amount>accountBalance){
            cout<<"insufficient balance";
            return;
        }
            accountBalance=accountBalance - amount;
            cout<<amount<<"is withdrawed from your account current balance is"<<accountBalance;
    }
    //transfer
    void transfer(double amount,Bank_customer &targetaccount ){
        if(!isactive){
            cout<<"the  account is not active cannot transfer the money";
            return;
        }
        if(!targetaccount.isactive){
            cout<<"the target account is not active the money cannot be transferred";
            return;
        }
        if(amount>accountBalance){
            cout<<"insufficient balance";
            return;
        }
            accountBalance=accountBalance-amount;
            targetaccount.accountBalance= accountBalance+amount;
            cout<<"amount has been transferred succesfully! ";

    }
    // printing customer details 
    void printdetails(){
        cout<<"customer name: "<<name<<endl;
        cout<<"account number: "<<accountNumber<<endl;
        cout<<"current balance: "<<accountBalance<<endl;
    }

};
int main(){
    Bank_customer c1;
    c1.getter("Alice",1001,2000.00);
    c1.deposit(1000.00);
    cout<<endl;
    c1.printdetails();
}