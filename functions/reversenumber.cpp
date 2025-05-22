//Reverse a number n using Function, Constraints: -5000<=n<=5000
#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Append the digit to the reversed number
        n /= 10;  // Remove the last digit
    }
    return reversed;
}

int main() {
    int n;

    // Input the number
    cout << "Enter a number (-5000 to 5000): ";
    cin >> n;

    // Check constraints
    if (n < -5000 || n > 5000) {
        cout << "Number out of range. Please enter a number between -5000 and 5000." << endl;
        return 1;
    }

    // Reverse the number and display the result
    int reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed << endl;

    return 0;

}