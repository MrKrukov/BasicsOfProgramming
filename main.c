#include "libs/data_structures/matrix/matrix.h"

long long getSum(int *a, int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

bool isUnique(int *a, int n) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if (a[i] == a[j])
                return false;
        }
    }
    return true;
}

void transposeIfMatrixHasNotEqualSumOfRows(matrix m) {
    long long sumArray[m.nRows];
    for (int i = 0; i < m.nRows; i++)
        sumArray[i] = getSum(m.values[i], m.nCols);
    if (isUnique(sumArray, m.nRows))
        transposeSquareMatrix(m);
}

int main() {
    int nRows, nCols;
    scanf("%d %d", &nRows, &nCols);

    matrix m = getMemMatrix(nRows, nCols);
    inputMatrix(m);

    transposeIfMatrixHasNotEqualSumOfRows(m);

    outputMatrix(m);

    return 0;
}
