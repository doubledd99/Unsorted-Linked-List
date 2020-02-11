#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
	length = 0;
	currentPosition = 0;
}
typedef int data;

bool UnsortedType::makeEmpty()
{
	length = 0;
	return true;
}

bool UnsortedType::isFull()
{
	if (length == maxItems)
		return true;
	else 
		return false;
}

int UnsortedType::getLength()
{
	return length;
}

data UnsortedType::getItem(ItemType)
{	
	bool finishedSearching = false;
	do
	{
		
	} while (!finishedSearching);
	return 1;
}

bool UnsortedType::insertItem(ItemType item)
{
	
	return false;
}

bool UnsortedType::deleteItem(ItemType item)
{
	return false;
}

bool UnsortedType::resetList()
{
	currentPosition = -1;
	return false;
}

bool UnsortedType::getNextItem()
{
	return 1;
}
