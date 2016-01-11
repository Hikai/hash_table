#include "hash_table.h"

int main()
{
	int input = 0;
	string input_s;
	Node * node = new Node;
	Node * node2 = new Node;
	DivideHash * dh = new DivideHash;
	DigitsFoldingHash * dfh = new DigitsFoldingHash;
	cin >> input;
	node->key = dh->divide_hash(input);
	node->value = dh->value_check(node->key);
	cout << "Key = " << node->key << "\n" << "Value = " << node->value << endl;
	cin >> input_s;
	node2->key = dfh->digitsfolding_hash(input_s);
	cout << "Digits folding hash address = " << node2->key << endl;
	cout << dfh->value_check(node2->key) << endl;
	node->destroy_node(node);
	node2->destroy_node(node2);
	delete dh;
	delete dfh;
	return 0;
}