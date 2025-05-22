#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
    vector<int>arr(5);
    cout<<"enter the inputs: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // file ko open kro
    ofstream fout;
    fout.open("zero.txt");
    fout<<"original data\n";
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout<<"\nsorted data\n";
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout.close();

}