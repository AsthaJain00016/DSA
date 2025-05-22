// read data from the file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("data.txt",ios::in);
    if(!file){
        cout<<"file coul not be opened!"<<endl;
        return 1;
    }
    string data;
    while(getline(file,data)){
        cout<<data<<endl;
    }
    file.close();
}