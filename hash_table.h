#pragma once
#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include <iostream>
#include <string>

#define HASH_SIZE 139

using namespace std;

class Node
{
public :
	unsigned int key;
	int value;
	Node()
	{

	}
	~Node()
	{

	}
	void destroy_node(Node *);
};

//Table size = prime number
//Better good number that 2 square number nowhere near prime number
//ex = 139
class DivideHash
{
private:
	int divide_table[HASH_SIZE] = { 0, };
public :
	DivideHash()
	{

	}
	~DivideHash()
	{

	}
	unsigned int divide_hash(int);
	int value_check(int);
};

class DigitsFoldingHash
{
private :
	string digits_table[HASH_SIZE] = { "", };
public :
	DigitsFoldingHash()
	{

	}
	~DigitsFoldingHash()
	{

	}
	unsigned int digitsfolding_hash(string);
	string value_check(int);
};

#endif