#include "vector.h"

void print_vector(std::vector<int> v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
}

std::vector<int> slice(const std::vector<int>& v, int start, int end) {
    int oldlen = v.size();
    int newlen;

    if (end == -1 or end >= oldlen){
        newlen = oldlen-start;
    } else {
        newlen = end-start;
    }

    std::vector<int> nv(newlen);

    for (int i=0; i<newlen; i++) {
        nv[i] = v[start+i];
    }
    return nv;
}
