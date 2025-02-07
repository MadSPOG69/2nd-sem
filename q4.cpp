#include <iostream>

int main() {
    int n;
    std::cout << "Size of square? : ";
    std::cin >> n;

    int arr[n][n] = { 0 };
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right && num <= n * n; i++) {
            arr[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom && num <= n * n; i++) {
            arr[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left && num <= n * n; i--) {
            arr[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top && num <= n * n; i--) {
            arr[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}