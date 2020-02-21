#include "insertion_sort.h"

std::vector<int> v = {12, 3, 45, 65, 3, 4, 7, 4, 46, 3, 2, 32, 32, 12, 23};

int main() {
    for(int j = 1; j<v.size(); j++){
        v = insertion_sort(v, j);
    }
    // print_vector(v) omitted unless printing in insertion_sort.cpp is omitted
}


