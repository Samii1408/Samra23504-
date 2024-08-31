#include <iostream>
using namespace std;

// Declare the global variable
int globalVar;

// Function to multiply the global variable by 2
void multiplyByTwo() {
    globalVar *= 2;
}

int main() {
    // Input a number
    cout << "Enter a number: ";
    cin >> globalVar;

    // Call the function to multiply the global variable by 2
    multiplyByTwo();

    // Display the value of the global variable
    cout << "The value of the global variable after multiplication is: " << globalVar << endl;

    return 0;
}
