#include "libs/data_structures/vector/vector.h"

int main() {
    vector v = createVector(4);
    pushBack(&v, 2);
    pushBack(&v, 3);
    pushBack(&v, 1);
    deleteVector(&v);
    v.size = 7;
    pushBack(&v, 4);
    assert(v.data[0] == 4);



    return 0;
}
