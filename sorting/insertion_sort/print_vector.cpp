#include "insertion_sort.h"

void print_vector(std::vector<int> v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
}
