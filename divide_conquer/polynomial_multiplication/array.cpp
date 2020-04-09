#include "array.h"

void log_array(int x[], const int size){
    std::cout << "Array Elements: \n";
    for (int i = 0; i < size; i++){
        std::cout << x[i] << '\n';
    }
}

int* slice_array(int x[], int start_slice, int end_slice){
    int new_size = end_slice - start_slice + 1;
    int* new_array = new int[new_size];
    for (int i = 0; i < new_size; i++){
        new_array[i] = x[i + start_slice];
    } 
    return new_array;
}

int* multiply(int A[], int B[], const int n){
    if (n == 1){
        int* C_1 = new int[1];
        C_1[0] = A[0]*B[0];
        return C_1;
    }
    const int new_n = 2*n-1;
    const int slice_size = n/2;
    int* A_L = slice_array(A, 0, slice_size-1);
    int* A_H = slice_array(A, slice_size, n-1);
    int* B_L = slice_array(B, 0, slice_size-1);
    int* B_H = slice_array(B, slice_size, n-1);
    int* C_L = multiply(A_L, B_L, slice_size);
    int* C_H = multiply(A_H, B_H, slice_size);
    int* A_M = new int[slice_size];
    int* B_M = new int[slice_size];
    for (int i = 0; i < slice_size; i++){
        A_M[i] = A_L[i] + A_H[i];
        B_M[i] = B_L[i] + B_H[i];
    }
    int* C_M = multiply(A_M, B_M, slice_size);
    int* C = new int[new_n];
    for (int i = 0; i < new_n; i++){
        C[i] = 0;
    }
    for (int i = 0; i < n-1; i++){
        log_array(C, new_n);
        std::cout << "C[i]: " << C[i] << " C_L[i]: " << C_L[i] << " C_H[i]: " << C_H[i] << "\n";
        C[i] = C[i] + C_L[i];
        C[i+n] = C[i+n] + C_H[i];
        C[i+slice_size] = C[i+slice_size] + C_M[i] - C_L[i] - C_H[i];
    }
    delete A_L;delete A_M;delete A_H;
    delete B_L;delete B_M;delete B_H;
    delete C_L;delete C_M;delete C_H;
    return C;
}
