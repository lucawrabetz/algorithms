#include "array.h"

// assumption: n is a power of 2 
// first part of main will initialize two random polynomials A, B, based on n

int main(){
    const int n = 4;
    int A[n];
    int B[n];
    for (int i = 0; i<n; i++){
        int j = rand() % 3;
        int k = rand() % 3;
        A[i] = j;
        B[i] = k;
    }
    int* C = multiply(A, B, n);
    log_array(A, n);
    log_array(B, n);
    log_array(C, 2*n-1);
    delete C; 
}