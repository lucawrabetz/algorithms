#include "merge.h"

// assumes even number of elements in list to be sorted

void merge_sort(std::vector<int>& v, int p, int r){
    if (p < r){
        // compute split
        int q_f = (r-p)/2;
        int q = p + q_f;
        // call merge_sort recursively on each
        merge_sort(v, p, q);
        merge_sort(v, q+1, r);
        merge(v, p, q, r);
    }
}