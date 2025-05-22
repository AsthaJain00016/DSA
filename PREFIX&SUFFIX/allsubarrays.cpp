// program to print all the subarrrays of the given array
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Print the subarray from index i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    
}