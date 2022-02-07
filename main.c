#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>
#include "libs/data_structures/bitset/bitset.h"
#include "libs/data_structures/unordered_array_set/unordered_array_set.h"
#include "libs/data_structures/ordered_array_set/ordered_array_set.h"

int main() {
    ordered_array_set a = ordered_array_set_create(7);
    ordered_array_set_insert(&a, 6);
    ordered_array_set_print(a);
    return 0;
}
