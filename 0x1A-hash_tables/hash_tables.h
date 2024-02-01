#ifndef  HASH_TABLE
#define  HASH_TABLE

struct HashNode {
    int key;
    int value;
    struct HashNode* next;
};

typedef struct {
    unsigned long int size;
    struct HashNode** table;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif  HASH_TABLE
