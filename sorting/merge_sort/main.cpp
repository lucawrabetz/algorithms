#include "vector.h"
#include "merge_sort.h"

int main(){
    std::vector<int> v = {12, 3, 45, 65, 3, 4, 7, 4, 46, 3, 2, 32, 32, 12, 23, 12};
    merge_sort(v, 0, v.size()-1);
    print_vector(v);
    return 0;
}