#include "bitset.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bitset bitset_create(unsigned maxValue) {
    assert(maxValue < 32);
    return (bitset){0, maxValue};
}

bool bitset_checkValue(bitset set, unsigned int value) {
    return value >= 0 && value <= set.maxValue;
}

bool bitset_in(bitset set, unsigned int value) {
    assert(bitset_checkValue(set, value));
    return set.value >> value & 1;
}

bool bitset_isEqual(bitset set1, bitset set2) {
    return set1.value == set2.value;
}

bool bitset_isSubset(bitset subset, bitset set) {
    assert(subset.maxValue == set.maxValue);
    return (set.value & subset.value) == subset.value;
}

void bitset_insert(bitset *set, unsigned int value) {
    assert(bitset_checkValue(*set, value));
    set->value |= 1 << value;
}

void bitset_deleteElement(bitset *set, unsigned int value) {
    set->value &= ~(1 << value);
}

bitset bitset_union(bitset set1, bitset set2) {
    assert(set1.maxValue == set2.maxValue);
    return (bitset){set1.value | set2.value, set1.maxValue};
}

bitset bitset_intersection(bitset set1, bitset set2) {
    assert(set1.maxValue == set2.maxValue);
    return (bitset){set1.value & set2.value, set1.maxValue};
}

bitset bitset_difference(bitset set1, bitset set2) {
    assert(set1.maxValue == set2.maxValue);
    return (bitset){set1.value & ~set2.value, set1.maxValue};
}

bitset bitset_symmetricDifference(bitset set1, bitset set2) {
    assert(set1.maxValue == set2.maxValue);
    return (bitset){set1.value ^ set2.value, set1.maxValue};
}

bitset bitset_complement(bitset set) {
    return (bitset){~set.value, set.maxValue};
}

void bitset_print(bitset set) {
    printf("{");
    int isEmpty = true;
    for (int i = 0; i <= set.maxValue; i++) {
        if (bitset_in(set, i)) {
            printf("%d, ", i);
            isEmpty = false;
        }
    }
    if (isEmpty)
        printf("}");
    else
        printf("\b\b}\n");
}