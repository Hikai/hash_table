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
	divide_table[key - 1] = value;
	return key;
}

int DivideHash::value_check(int key)
{
	return divide_table[key - 1];
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
	digits_table[sum - 1] = value;
	return sum;
}

string DigitsFoldingHash::value_check(int key)
{
	return digits_table[key - 1];
}