# include <iostream>
using namespace std;
/* g++ .\trying.cpp -o .\trying.exe
.\trying.exe*/
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; // Read two integers from user input

    cout << "Sum: " << a + b << endl; // Output the sum of the two numbers
    cout << "Difference: " << a - b << endl; // Output the difference of the two numbers
    cout << "Product: " << a * b << endl; // Output the product of the two numbers
    if (b != 0) {
        cout << "Quotient: " << a / b << endl; // Output the quotient of the two numbers
        cout << "Remainder: " << a % b << endl; // Output the remainder of the two numbers
    } else {
        cout << "Cannot divide by zero." << endl;// Handle division by zero case
    }

    return 0;
}
