// creating a 4d array using pointer
#include<iostream>
using namespace std;
int main(){
    int L,B,H,W;
    cout<<"Enter the dimensions of the array: ";
    cin>>L>>B>>H>>W;
    // creating the array
    int ****ptr=new int***[L];
    for(int i=0;i<L;i++){
        ptr[i]=new int**[B];
        for(int j=0;j<B;j++){
            ptr[i][j]=new int*[H];
            for(int k=0;k<H;k++){
                ptr[i][j][k]=new int[W];
            }
        }
    }

    //intialising values
    cout<<"Enter the values: ";
    for(int i=0;i<L;i++){
        for(int j=0;j<B;j++){
            for(int k=0;k<H;k++){
                for(int l=0;l<W;l++){
                    cin>>ptr[i][j][k][l];
                }
            }
        }
    }

    //printing the values
    for(int i=0;i<L;i++){
        cout<<"Layer "<<i+1<<": "<<endl;
        for(int j=0;j<B;j++){
            cout<<"Block "<<j+1<<": "<<endl;
            for(int k=0;k<H;k++){
                for(int l=0;l<W;l++){
                    cout<<ptr[i][j][k][l]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }

    // deleting memory from the heap
    for(int i=0;i<L;i++){
        for(int j=0;j<B;j++){
            for(int k=0;k<H;k++){
                delete[]ptr[i][j][k];
            }
            delete[]ptr[i][j];
        }
        delete[]ptr[i];
    }
    delete[] ptr;
}