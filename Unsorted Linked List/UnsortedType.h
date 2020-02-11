#ifndef UnsortedType_h
#define UnsortedType_h

#include <stdlib.h>
#include "ItemType.h"

using namespace std;

class UnsortedType {	
	typedef int data;
public:
	UnsortedType();
	int const maxItems = 100000000;
	data item;
	UnsortedType* next;

	//Accessor Methods

	
	//Modifier Methods
	
	bool makeEmpty();
	bool isFull();
	int getLength();
	data getItem(ItemType);
	bool insertItem(ItemType item);
	bool deleteItem(ItemType item);
	bool resetList();
	bool getNextItem();
private:	
	int length;
	int currentPosition;
	ItemType* head;
	ItemType* tail;
	ItemType* position;
	
};

#endif