#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    do {
        cout << ch;

        if (ch + 4 <= 'z') {
            cout << ", ";
        }

        ch = ch + 4; // skip 3 letters

    } while (ch <= 'z');

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter any number: ";
    cin >> num;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Special case for 0
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10; // remove last digit
            count++;
        }
    }

    cout << "Total number of digits: " << count;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num, first, last, sum;

    cout << "Enter any number: ";
    cin >> num;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Get last digit
    last = num % 10;

    // Find first digit
    while (num >= 10) {
        num = num / 10;
    }
    first = num;

    // Calculate sum
    sum = first + last;

    cout << "The sum of the first and the last digit: " << sum;

    return 0;
}
