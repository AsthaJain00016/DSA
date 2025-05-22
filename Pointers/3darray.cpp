// creating 3d array using pointer
#include<iostream>
using namespace std;
int main(){
    int L,B,H;
    cout<<"Enter the dimensions of the array: ";
    cin>>L>>B>>H;
    // creating 3d array
    int ***ptr=new int **[L];
    for(int i=0;i<L;i++){
        ptr[i]=new int*[B];
        for(int j=0;j<B;j++){
            ptr[i][j]=new int[H];
        }
    }

    // for intialising value
    cout<<"Enter the values of the array: ";
    for(int i=0;i<L;i++){
        for(int j=0;j<B;j++){
            for(int k=0;k<H;k++){
                cin>>ptr[i][j][k];
            }
        }
    }

    // for printing the values
    for(int i=0;i<L;i++){
        for(int j=0;j<B;j++){
            for(int k=0;k<H;k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    // for deleting memory from the heap
    for(int i=0;i<L;i++){
        for(int j=0;j<B;j++){
            delete[]ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
}