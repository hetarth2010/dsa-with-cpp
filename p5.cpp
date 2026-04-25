#include <iostream>
using namespace std;

// UDFs
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int choice, a, b;

    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "Press 1 for +\n";
        cout << "Press 2 for -\n";
        cout << "Press 3 for *\n";
        cout << "Press 4 for /\n";
        cout << "Press 5 for %\n";
        cout << "Press 0 to Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 0) {
            cout << "Exiting program...\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        switch(choice) {
            case 1:
                cout << "Addition = " << add(a, b);
                break;

            case 2:
                cout << "Subtraction = " << sub(a, b);
                break;

            case 3:
                cout << "Multiplication = " << mul(a, b);
                break;

            case 4:
                if(b == 0)
                    cout << "Division by zero not allowed!";
                else
                    cout << "Division = " << divide(a, b);
                break;

            case 5:
                cout << "Modulus = " << mod(a, b);
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 0);

    return 0;
}