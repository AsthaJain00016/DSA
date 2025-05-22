// append data to a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("data.txt",ios::app);
    if(!file){
        cout<<"file could not be opened!"<<endl;
        return 1;
    }
    file<<"\n New data added. ";
    file.close();
    cout<<"data append successfully";
}