#include "hash_table.h"

int main()
{
	int input = 0;
	Node * node = new Node;
	DivideHash * dh = new DivideHash;
	scanf_s("%d", &input);
	node->key = dh->divide_hash(input);
	node->value = dh->value_check(node->key);
	cout << "Key : " << node->key << "\n" << "Value : " << node->value << endl;
	return 0;
}