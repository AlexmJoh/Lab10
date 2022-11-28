#pragma once

#include <string>
#include <memory.h>
#include "Node.h"


#include "HashTable.cpp"

template<class ItemType> class HashTable
{
	int max_buckets;

public:
	HashTable();
	HashTable(int max_size);

	bool empty();
	int bucket_count();
	int bucket_size();
	bool add(ItemType key);
	bool remove(ItemType key);
	bool clear();
	ItemType getValue(ItemType key);
	bool contains(ItemType key);
	int hashFunction(ItemType value);

	~HashTable();
	
private:

};