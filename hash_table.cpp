#include "hash_table.h"

void Node::destroy_node(Node * node)
{
	delete node;
}

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

unsigned int DigitsFoldingHash::digitsfolding_hash(string value)
{
	int sum = 0;
	for (int i = 0; i < 1024; i++) {
		if (!value[i]) {
			break;
		}
		sum += value[i];
	}
	return sum;
}