#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {          // Outer loop for rows
        for (int j = 1; j <= i; j++) {      // Inner loop for columns
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
// task 2
#include <iostream>
using namespace std;

int main() {
    int n, num = 1;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {          
        for (int j = 1; j <= i; j++) {      
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
//task 3
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {              // Outer loop for rows
        
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}