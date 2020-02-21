#include "insertion_sort.h"

std::vector<int> insertion_sort(std::vector<int> v, int j){
    std::cout << "\n\n\nInsertion Sort: Iteration " << j << "\n";
    int key = v[j];
    std::cout << "Key: " << key << "\n";
    int i = j-1;
    while(v[i] > key && i > -1){
        v[i+1] = v[i];
        --i;
    }
    std::cout << "Placed " << key << " after " << v[i] << "\n"; 
    v[i+1] = key;
    print_vector(v);
    return v;
}
