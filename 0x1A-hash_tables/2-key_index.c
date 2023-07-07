#include "hash_tables.h"


/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array
 *
 * Return: The index at which the key should be stored,
 *         based on the hash_djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;
    unsigned long int index;

    hash = hash_djb2(key);

    index = hash % size;

    return index;
}
