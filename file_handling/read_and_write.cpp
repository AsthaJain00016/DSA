// read and write data in same file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("data.txt",ios::in | ios::out | ios::app);//read and write mode
    if(!file){
        cout<<"file couldn't be opened"<<endl;
        return 1;
    }
    // write to the file 
    file<<"\n New line added";
    //move the pointer to the beginning before reading 
    file.seekg(0);

    //read file
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
}