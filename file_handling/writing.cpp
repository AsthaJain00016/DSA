//write data to a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("data.txt",ios::out);//open file in write mode if it exist otherwise it will create the file then it will open it
    if(!file){
        cout<<"file coukd not be opened!"<<endl;
        return 1;
    }
    file<<"Hello, this is file handling using f stream";
    file.close();
    cout<<"data written successfully!";
}