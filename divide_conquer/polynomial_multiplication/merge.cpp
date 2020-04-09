#include "vector.h"
#include "merge.h"

void merge(std::vector<int>& v, int p, int q, int r){
    int size1 = q - p + 1;
    int size2 = r - q;
    int x = q + 1;
    std::vector<int> copy1 = slice(v, p, x);
    std::vector<int> copy2;
    if (r == v.size()){
        copy2 = slice(v, q+1, -1);
    }
    else{
        copy2 = slice(v, q+1, r+1);
    }
    int sentinel = 10000000;
    copy1.push_back(sentinel);
    copy2.push_back(sentinel);
    int i = 0;
    int j = 0;
    int k;
    for (k=p; k<r+1; k++){
        if (copy1[i] <= copy2[j]){
            v[k] = copy1[i];
            i++;
        }      
        else{
            v[k] = copy2[j];
            j++;
        }
    }   
}

