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