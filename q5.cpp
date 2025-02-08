#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;

    int matrix[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element for Row " << i + 1 << " Column " << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nOriginal Matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - 1 - j]);
        }
    }
    
    cout << "\nRotated Matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}
