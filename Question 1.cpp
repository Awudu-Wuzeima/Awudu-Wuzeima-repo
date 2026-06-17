#include <iostream>
using namespace std;

int main() {
    int first_number, second_number;

    cout << "Enter first integer: ";
    cin >> first_number;

    cout << "Enter second integer: ";
    cin >> second_number;

    cout << "Sum = " << first_number + second_number << endl;
    cout << "Difference = " << first_number - second_number << endl;
    cout << "Product = " << first_number * second_number << endl;

    if (second_number != 0)
        cout << "Quotient = " << (double) first_number / second_number << endl;
    else
        cout << "Cannot divide by zero." << endl;

    return 0;
}
