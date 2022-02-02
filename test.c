#include "libs/data_structures/unordered_array_set/unordered_array_set.h"

void test_unordered_array_set_in1() {
    unordered_array_set set = unordered_array_set_create_from_array((int[5]){1, 2, 3, 4, 5}, 5);
    int value = 1;
    size_t res = unordered_array_set_in(&set, value);
    int expectedRes = 0;
    assert (res == expectedRes);
}

void test_unordered_array_set_in2() {
    unordered_array_set set = unordered_array_set_create_from_array((int[7]){1, 5, 4, 6, 3, 2, 9}, 7);
    int value = 9;
    size_t res = unordered_array_set_in(&set, value);
    int expectedRes = 6;
    assert (res == expectedRes);
}

void test_unordered_array_set_in3() {
    unordered_array_set set = unordered_array_set_create_from_array((int[10]){9, 4, 3, 5, 6, 2, 1, 8, 7, 0}, 10);
    int value = 1;
    size_t res = unordered_array_set_in(&set, value);
    int expectedRes = 6;
    assert (res == expectedRes);
}

void test_unordered_array_set_in() {
    test_unordered_array_set_in1();
    test_unordered_array_set_in2();
    test_unordered_array_set_in3();
}

void test_unordered_array_set_insert1() {
    unordered_array_set set = unordered_array_set_create(3);
    unordered_array_set_insert(&set, 6);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[1]){6}, 1);
    assert(unordered_array_set_isEqual(set, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_insert2() {
    unordered_array_set set = unordered_array_set_create(2);
    unordered_array_set_insert(&set, 1);
    unordered_array_set_insert(&set, 10);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[2]){1, 10}, 2);
    assert(unordered_array_set_isEqual(set, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_insert3() {
    unordered_array_set set = unordered_array_set_create(5);
    unordered_array_set_insert(&set, 1);
    unordered_array_set_insert(&set, 2);
    unordered_array_set_insert(&set, 3);
    unordered_array_set_insert(&set, 4);
    unordered_array_set_insert(&set, 5);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3, 4, 5}, 5);
    assert(unordered_array_set_isEqual(set, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_insert() {
    test_unordered_array_set_insert1();
    test_unordered_array_set_insert2();
    test_unordered_array_set_insert3();
}

void test_unordered_array_set_union1() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set unionSets = unordered_array_set_union(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_union2() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){}, 0);
    unordered_array_set unionSets = unordered_array_set_union(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_union3() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){3, 4, 1, 5, 2}, 5);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 3, 2, 6, 7}, 5);
    unordered_array_set unionSets = unordered_array_set_union(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3, 4, 5, 6, 7}, 7);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_union() {
    test_unordered_array_set_union1();
    test_unordered_array_set_union2();
    test_unordered_array_set_union3();
}

void test_unordered_array_set_intersection1() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 3, 2}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set unionSets = unordered_array_set_intersection(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_intersection2() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){}, 0);
    unordered_array_set unionSets = unordered_array_set_intersection(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){}, 0);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_intersection3() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){3, 4, 1, 5, 2}, 5);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 3, 2, 6, 7}, 5);
    unordered_array_set unionSets = unordered_array_set_intersection(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_intersection() {
    test_unordered_array_set_intersection1();
    test_unordered_array_set_intersection2();
    test_unordered_array_set_intersection3();
}

void test_unordered_array_set_difference1() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 3, 2}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set unionSets = unordered_array_set_difference(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){}, 0);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_difference2() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){}, 0);
    unordered_array_set unionSets = unordered_array_set_difference(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_difference3() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){3, 4, 1, 5, 2}, 5);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 3, 2, 6, 7}, 5);
    unordered_array_set unionSets = unordered_array_set_difference(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){4, 5}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_difference() {
    test_unordered_array_set_difference1();
    test_unordered_array_set_difference2();
    test_unordered_array_set_difference3();
}

void test_unordered_array_set_symmetricDifference1() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 3, 2}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set unionSets = unordered_array_set_symmetricDifference(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){}, 0);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_symmetricDifference2() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){3}, 1);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 2}, 2);
    unordered_array_set unionSets = unordered_array_set_symmetricDifference(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_symmetricDifference3() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){3, 4, 1, 5, 2}, 5);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){1, 3, 2, 6, 7}, 5);
    unordered_array_set unionSets = unordered_array_set_symmetricDifference(set1, set2);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){4, 5, 7, 6}, 4);
    assert (unordered_array_set_isEqual(unionSets, expectedRes));
    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(unionSets);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_symmetricDifference() {
    test_unordered_array_set_symmetricDifference1();
    test_unordered_array_set_symmetricDifference2();
    test_unordered_array_set_symmetricDifference3();
}

void test_unordered_array_set_complement1() {
    unordered_array_set set = unordered_array_set_create_from_array((int[]){1}, 1);
    unordered_array_set universum = unordered_array_set_create_from_array((int[]) {1, 3, 2, 4, 5}, 5);
    unordered_array_set complement = unordered_array_set_complement(set, universum);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){2, 3, 4, 5}, 4);
    assert(unordered_array_set_isEqual(universum, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(universum);
    unordered_array_set_delete(complement);
}

void test_unordered_array_set_complement2() {
    unordered_array_set set = unordered_array_set_create_from_array((int[]){1, 3, 2, 4}, 4);
    unordered_array_set universum = unordered_array_set_create_from_array((int[]){1, 3, 2, 4, 5}, 5);
    unordered_array_set complement = unordered_array_set_complement(set, universum);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){5}, 4);
    assert(unordered_array_set_isEqual(universum, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(universum);
    unordered_array_set_delete(complement);
}

void test_unordered_array_set_complement3() {
    unordered_array_set set = unordered_array_set_create_from_array((int[]){1, 3, 2}, 3);
    unordered_array_set universum = unordered_array_set_create_from_array((int[]) {1, 3, 2}, 3);
    unordered_array_set complement = unordered_array_set_complement(set, universum);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){}, 0);
    assert(unordered_array_set_isEqual(universum, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(universum);
    unordered_array_set_delete(complement);
}

void test_unordered_array_set_complement() {
    test_unordered_array_set_complement1();
    test_unordered_array_set_complement2();
    test_unordered_array_set_complement3();
}

void test_unordered_array_set_delete1() {
    unordered_array_set set = unordered_array_set_create_from_array((int[]){3, 1, 2}, 3);
    unordered_array_set_deleteElement(&set, 1);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){3, 2}, 2);
    assert(unordered_array_set_isEqual(set, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_delete2() {
    unordered_array_set set = unordered_array_set_create_from_array((int[]){5, 3, 1, 2, 4}, 5);
    unordered_array_set_deleteElement(&set, 1);
    unordered_array_set_deleteElement(&set, 3);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){5, 2, 4}, 3);
    assert (unordered_array_set_isEqual(set, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_delete3() {
    unordered_array_set set = unordered_array_set_create_from_array((int[]){3, 1, 2}, 3);
    unordered_array_set_deleteElement(&set, 1);
    unordered_array_set_deleteElement(&set, 2);
    unordered_array_set_deleteElement(&set, 3);
    unordered_array_set expectedRes = unordered_array_set_create_from_array((int[]){}, 0);
    assert (unordered_array_set_isEqual(set, expectedRes));
    unordered_array_set_delete(set);
    unordered_array_set_delete(expectedRes);
}

void test_unordered_array_set_delete() {
    test_unordered_array_set_delete1();
    test_unordered_array_set_delete2();
    test_unordered_array_set_delete3();
}

void test() {
    test_unordered_array_set_in();
    test_unordered_array_set_insert();
    test_unordered_array_set_union();
    test_unordered_array_set_intersection();
    test_unordered_array_set_difference();
    test_unordered_array_set_symmetricDifference();
    test_unordered_array_set_complement();
    test_unordered_array_set_delete();
}

int main() {
    test();

    return 0;
}