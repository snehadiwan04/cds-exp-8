//Sneha diwan
//entc B2
//23070123126
//experiment 8
//DIAGONAL ADDITION 
#include <iostream>
using namespace std;


const int MAX = 100;

void printDiagonalSums(int mat[][MAX], int n) 
{ 
    int principal = 0;

    for (int i = 0; i < n; i++)  
    { 
        // Condition for principal diagonal 
        principal += mat[i][i]; 
    } 

    cout << "Sum of the diagonal elements is: " << principal << endl; 
} 

int main() 
{ 
    int a[][MAX] = {{1, 12, 3, 4},  
                    {5, 6, 7, 8},  
                    {1, 2, 4, 9},  
                    {5, 6, 5, 3}}; 
    printDiagonalSums(a, 4); 
return 0;
}
/*
Output 
Sum of the diagonal elements is: 14
 
 


=== Code Execution Successful ===


*/
