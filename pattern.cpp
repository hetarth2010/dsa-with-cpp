#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {     
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

    for (int i = 1; i <= n; i++) {          
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

    
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

//task 4
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {     
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "0""1" ;
        }

        cout << endl;
    }

    return 0;
}
//task 5
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {         
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
