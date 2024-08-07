#include <iostream>
using namespace std;

void countFrequencies(int arr[], int n) {
    int frequency[1000] = {0}; // Assuming elements are between 0 and 999

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < 1000; i++) {
        if (frequency[i] != 0) {
            cout << "Element " << i << " occurs " << frequency[i] << " times." << endl;
        }
    }
}

int main() {
    int arr[] = {2,1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    countFrequencies(arr, n);

    return 0;
}
















































































// #include <iostream>
// using namespace std;

// void inputMatrix(int matrix[][10], int rows, int cols) {
//     cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):\n";
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }

// void multiplyMatrices(int matrix1[][10], int rows1, int cols1, int matrix2[][10], int rows2, int cols2, int result[][10]) {
//     for(int i = 0; i < rows1; i++) {
//         for(int j = 0; j < cols2; j++) {
//             result[i][j] = 0;
//             for(int k = 0; k < cols1; k++) {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }
// }

// void printMatrix(int matrix[][10], int rows, int cols) {
//     cout << "Resultant Matrix (" << rows << "x" << cols << "):\n";
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int rows1, cols1, rows2, cols2;
    
//     // Input dimensions for the first matrix
//     cout << "Enter the number of rows and columns for the first matrix: ";
//     cin >> rows1 >> cols1;
    
//     // Input dimensions for the second matrix
//     cout << "Enter the number of rows and columns for the second matrix: ";
//     cin >> rows2 >> cols2;
    
//     // Check if matrix multiplication is possible
//     if (cols1 != rows2) {
//         cout << "Matrix multiplication not possible. The number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
//         return 1;
//     }
    
//     // Initialize matrices
//     int matrix1[10][10], matrix2[10][10], result[10][10];
    
//     // Input matrices
//     inputMatrix(matrix1, rows1, cols1);
//     inputMatrix(matrix2, rows2, cols2);
    
//     // Multiply matrices
//     multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2, result);
    
//     // Print the result
//     printMatrix(result, rows1, cols2);
    
//     return 0;
// }
