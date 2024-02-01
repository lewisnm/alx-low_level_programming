#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

int main() {
    unsigned long int size = 10;
    hash_table_t* ht_basic;
    hash_table_t* ht_min_size;
    hash_table_t* ht_large_size;
    hash_table_t* ht_zero_size;
    hash_table_t* ht_memory_failure;

    ht_basic = hash_table_create(size);
    printf("Basic Test Case: Hash table created with size %lu\n", ht_basic->size);
    free(ht_basic->table);
    free(ht_basic);
    size = 1;
    ht_min_size = hash_table_create(size);
    printf("Minimum Size Test Case: Hash table created with size %lu\n", ht_min_size->size);
    free(ht_min_size->table);
    free(ht_min_size);
    size = 1000;
    ht_large_size = hash_table_create(size);
    printf("Large Size Test Case: Hash table created with size %lu\n", ht_large_size->size);
    free(ht_large_size->table);
    free(ht_large_size);
    size = 0;
    ht_zero_size = hash_table_create(size);
    if (ht_zero_size == NULL) {
        printf("Zero Size Test Case: Hash table creation failed due to zero size\n");
    } else {
        free(ht_zero_size->table);
        free(ht_zero_size);
	}
    size = 10;
    ht_memory_failure = hash_table_create(size);
    if (ht_memory_failure == NULL) {
        printf("Memory Allocation Failure Test Case: Hash table creation failed due to memory allocation failure\n");
    } else {
        free(ht_memory_failure->table);
        free(ht_memory_failure);
   }

    return 0;
}
