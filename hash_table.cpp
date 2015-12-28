#include "hash_table.h"

unsigned int DivideHash::divide_hash(int value)
{
	unsigned int key = value % HASH_SIZE;
	while (key > HASH_SIZE) {
		key = value % HASH_SIZE;
	}
	table[key] = value;
	return key;
}

int DivideHash::value_check(int key)
{
	return table[key];
}