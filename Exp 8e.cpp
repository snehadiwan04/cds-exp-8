//Sneha diwan
//entc B2
//23070123126
//experiment 8
//TRANSPOSE OF MATRIX 
#include <iostream>
using namespace std;

int main() {
    int r, c ;

    // Getting the size of the matrix
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r  >> c ;

    int m[r][c], transpose[c][r];

    // Getting elements of the matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m[i][j];
        }
    }

    // Transposing the matrix
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            transpose[j][i] = m[i][j];
        }
    }

    // Displaying the transpose of the matrix
    cout << "\nTranspose of the matrix:" << endl;
    for(int i = 0; i < c; ++i) {
        for(int j = 0; j < r; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Output 
Enter the number of rows and columns of the matrix: 2 2
Enter elements of the first matrix:
Enter element at position (0, 0): 1 
Enter element at position (0, 1): 2
Enter element at position (1, 0): 3
Enter element at position (1, 1): 4

Transpose of the matrix:
1 3 
2 4 
 
 


=== Code Execution Successful ===


*/
