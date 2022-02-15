#include "libs/data_structures/matrix/matrix.h"

int main() {
    matrix m1 = getMemMatrix(3, 3);
    inputMatrix(m1);
    printf("%d", isSymmetricMatrix(m1));
    return 0;
}
