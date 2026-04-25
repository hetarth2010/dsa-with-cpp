// Q1: Negative Elements in 1D Array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Negative elements are: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

// Q2: Largest Element in 2D Array

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[r][c];

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    cout << "Largest element is: " << max;

    return 0;
}

// Q3: Transpose of 2D Array

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[r][c];

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Transpose matrix:\n";
    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Q4: Sum of Row & Column in 2D Array

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[r][c];

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int rowIndex, colIndex;

    cout << "Enter row index: ";
    cin >> rowIndex;

    cout << "Enter column index: ";
    cin >> colIndex;

    int rowSum = 0, colSum = 0;

    for(int j = 0; j < c; j++) {
        rowSum += arr[rowIndex][j];
    }

    for(int i = 0; i < r; i++) {
        colSum += arr[i][colIndex];
    }

    cout << "Sum of row " << rowIndex << " = " << rowSum << endl;
    cout << "Sum of column " << colIndex << " = " << colSum << endl;

    return 0;
}