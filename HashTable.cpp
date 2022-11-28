// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "HashTable.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

template<class ItemType>
HashTable<ItemType>::HashTable()
{
    max_buckets = 1000;
}


template<class ItemType>
HashTable<ItemType>::HashTable(int max_size) : max_buckets(max_size){}


template<class ItemType>
bool HashTable<ItemType>::empty()
{

}


template<class ItemType>
int HashTable<ItemType>::bucket_size()
{

}

template<class ItemType>
bool HashTable<ItemType>::add(ItemType key)
{

}


template<class ItemType>
bool HashTable<ItemType>::remove(ItemType key)
{

}


template<class ItemType>
bool HashTable<ItemType>::clear()
{

}


template<class ItemType>
ItemType HashTable<ItemType>::getValue(ItemType key)
{

}


template<class ItemType>
bool HashTable<ItemType>::contains(ItemType key)
{

}


template<class ItemType>
int HashTable<ItemType>::hashFunction(ItemType value)
{

}


template<class ItemType>
HashTable<ItemType>::~HashTable(){}






