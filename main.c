#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>
#include "bits.h"
#include "libs/data_structures/bitset/bitset.h"

int main() {
    bitset s = bitset_create(8);
    bitset_insert(&s, 6);
    bitset_insert(&s, 3);
    bitset_print(s);
    return 0;
}
