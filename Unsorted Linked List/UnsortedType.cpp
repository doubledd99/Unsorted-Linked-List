#include "UnsortedType.h"		//libraries used
#include <stdlib.h>				//libraries used
#include <iostream>				//libraries used
using namespace std;			//libraries used
UnsortedType::UnsortedType()	//Constructor
{
	length = 0;//sets initial length to 0
	head = nullptr;	//sets the head pointer to "literally nothing" -Busch
	position = head; //initialized the access point to also be the beginning of the list

}

UnsortedType::~UnsortedType() {//destructor
	makeEmpty(); //goes thru and deletes each ADT
}

bool UnsortedType::makeEmpty() //erases entries in said list
{
	node* location; //creates pointer location
	while (head != nullptr && position != nullptr) { //if the head or the position is nullptr it wont delete entry
		location = head; //sets location pointer to the same location where the pointer for beginning of list is
		head = location->nextItem; //sets the beginning list to the next entry, pending destruction
		delete location; //deletes location
	}
	length = 0;//after deleting it also sets length to 0
	return true;//SUCCESS
}

bool UnsortedType::isFull()//if there are 100000000 items this will return true
{
	if (length == maxItems)//if there are 100000000 items this will return true
		return true;//if there are 100000000 items this will return true
	else 
		return false;
}

int UnsortedType::getLength()//returns the length of the list as a integer
{
	return length;
}

node* UnsortedType::getItem(ItemType item) //returns memory location for searched integer
{
	position = head; //starts looking at the "top" of the list
	bool finishedSearching = false; //flag used for stopping loop
	do
	{
		if (position->object == item) {//if object in linked list matches searched item boom 
			return position; // returns memory location
		}
		else {
			position = position->nextItem; //pushed position onto next position
			finishedSearching = false; //loops once again
		}
		if (position->nextItem==nullptr) //if the node is last in linked list returns nullptr
			return nullptr;
		
	} while (!finishedSearching);
}

bool UnsortedType::insertItem(ItemType item) //inserts item to linked list given item to add
{
	length++;//increases length int counter by 1
	node* location; //creates a new pointer called location
	location = new node; //constructs an object at the newly allocated space
	location->object = item; // sets new node's object to given item
	location->nextItem = head;//sets old head as the new node's next item
	head = location; // sets the new head to the memory address of new node
	return true;//success
}

bool UnsortedType::deleteItem(ItemType item) //removes and deletes item from list
{
	node* location = head; //new location pointer equal to head
	node* previous = head; //new previous location pointer equal to head
	while (location->object != item && location->nextItem != nullptr) { //while the currently selected node's object isnt equal to what is being wished to be deleted and if there is something in object(not nullptr)
		previous = location; //saves previous mem location
		location = location->nextItem; //moves location 1 down list
	}
	if (location->object == item) {//if this is what you want to delete
		previous->nextItem = location->nextItem; //sets the previous node's nextItem to this node's next item
		delete location; // deletes location pointer
		length--;//reduces location variable by 1
	}
	return true;//success
}

void UnsortedType::resetList()//sets position pointer equal to head pointer
{
	position = head;//sets position pointer equal to head pointer
}

ItemType UnsortedType::getNextItem() //fetches the data inside node
{
	if (position == nullptr || position->nextItem == nullptr)//if this node or next node is not there
		return 1;//returns 1 as "nullptr" is not allowed
	if (position->nextItem != nullptr) { //if there IS a next node in list proceed
		position = position->nextItem;//updates position down list by 1
		return position->object; //returns the data from next node
	}
	
}

void UnsortedType::pointerGetNext()//returns the memory location for next node
{
	position = position->nextItem;//returns the memory location for next node
}

relationType UnsortedType::comparedTo(ItemType one, ItemType two)//can compare two variables
{
	if (one < two)
		return LESS; //one < two
	if (one == two)
		return EQUAL; //one == two
	if (one > two)
		return GREATER; //one > two
}

UnsortedType UnsortedType::Union(node* one, node* two) {//appends one list onto another given both list's head pointers
	UnsortedType list;//creates new list
	node* tempNode = one; //creates new pointer for node
	int size = 0; //sets size of list to 0
	while (tempNode->nextItem != nullptr) { //cycles thru list until end is reached
		size++; //increases size by 1
		tempNode = tempNode->nextItem; //progresses to next node, losing track of previous node
	}
	size++;//adds one to size variable
	while (size > 0) { //as long as size >0
		list.insertItem(one->object);//inserts item into new list
		if(size!=1) //if size == 1 it should not progress
			one = one->nextItem; //steps thru list
		size--;//reduces size by 1
	}
	tempNode = two; //creates new pointer for node
	size = 0;//sets size of list to 0
	while (tempNode->nextItem != nullptr) {//cycles thru list until end is reached
		size++; //increases size by 1
		tempNode = tempNode->nextItem; // steps thru list
	}
	size++;
	while (size > 0) { //as long as size >0 it will progress
		list.insertItem(two->object); //inserts items data from node into list
		if (size != 1) //if size == 1 it shouldnt progress
			two = two->nextItem; //steps through list
		size--; // reduces size by 1
	}
	return list; //returns list
}

node* UnsortedType::returnHead()//simply returns memory location of head of list
{
	return head;
}
