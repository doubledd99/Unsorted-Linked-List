#ifndef UnsortedType_h //defining articles for this header file
#define UnsortedType_h

#include <stdlib.h> //libraries used

using namespace std;//libraries used
typedef int ItemType;//type defined as integer called itemtype
enum relationType{LESS,EQUAL,GREATER}; //enum with 3 parameters called relationtype
struct node //this is what each "node" is made up of
{
	node* nextItem; //pointer to the next node in this linked list
	ItemType object; //holds the information the linked list is holding

};
class UnsortedType {	//class to utilize methods and accessor functions
	
public:
	UnsortedType(); //default constructor
	~UnsortedType(); //destructor
	int const maxItems = 100000000; //maximum allowable items, not enforced

	//Accessor Methods
	
	//Modifier Methods
	
	bool makeEmpty(); //destroys every node in linked list
	bool isFull(); //if there are 100000000 items this will return true
	int getLength(); // returns length of list as an int
	node* getItem(ItemType item); //returns the memory location for searched object
	bool insertItem(ItemType item);//inserts an item into linked list
	bool deleteItem(ItemType item); //removes an item from linked list
	void resetList(); //pushes position equal to head
	ItemType getNextItem(); //returns object of next item
	void pointerGetNext(); //simply updates pointer to next node
	relationType comparedTo(ItemType one, ItemType two); //method used to compare two items
	UnsortedType Union(node* one, node* two);//method to create new list after combining 2 lists
	node* returnHead();//returns the header of a list as a pointer
	
private:	
	int length;//length of the linked list
	node* head; //the starting point for the linked list
	node* position; //the current position the "cursor" is located, enables traversing thru list
};

#endif