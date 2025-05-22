#include<iostream>
#include<fstream>
using namespace std;
int main(){
// // for writing
    // // first of all we have to open the file 
    // // so we have to create a object for that
    // ofstream fout;
    // fout.open("zoom.txt");//this will open the file if it is present else will create the file then open it
    // // write
    // fout<<"hello INDIA";
    // fout.close();//resource release

    
// for reading
    ifstream fin;
    // file ko open kro
    fin.open("zoom.txt");
    //fr read kro
    char c;
    c=fin.get();
    while(!fin.eof()){
        cout<<c;
        c=fin.get();
    };
    fin.close();
    
}