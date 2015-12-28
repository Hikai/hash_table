#include "hash_table.h"

unsigned int HashFunction::divide_hash(int value)
{
	unsigned int key = value % HASH_SIZE;
	table[key] = value;
	return key;
}

int HashFunction::value_check(int key)
{
	return table[key];
}