// creating 2d array using pointer
#include<iostream>
using namespace std;
int main(){
    int n,m;// n=rows m=cols
    cout<<"Enter the number of rows and cols: ";
    cin>>n>>m;
    int **ptr=new int *[n];

    for(int i=0;i<n;i++){
        ptr[i]=new int[m];
    }

    // initialising values
    cout<<"Enter the values of the 2d array: "; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
        }
    }

    // printing values 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<*(*(ptr+i)+j)<<" ";// or cout<<ptr[i][j]
        }
        cout<<endl;
    }

    // for releasing the memory of the heap
    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;
}