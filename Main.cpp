#include "hash_table.h"

int main()
{
	int input = 0;
	Node * node = new Node;
	HashFunction * hf = new HashFunction;
	scanf_s("%d", &input);
	node->key = hf->divide_hash(input);
	node->value = hf->value_check(node->key);
	cout << node->key << "\n" << node->value << endl;
	return 0;
}