#ifndef ItemType_h
#define ItemType_h

#include <stdlib.h>
#include <string.h>

using namespace std;

class ItemType {
	ItemType();
public:
	typedef int object;
	
	//Accessor Methods
	enum relationType { LESS, GREATER, EQUAL };
	relationType comparedTo(ItemType item);

	//Mutator Methods

private:
	object data;
	ItemType* next;
	int nodePosition;
};









#endif