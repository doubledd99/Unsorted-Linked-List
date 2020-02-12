#include <iostream>
#include "UnsortedType.h"

using namespace std;

int main() {
	UnsortedType unsortedList;//creates new list
	unsortedList.insertItem(420);	
	unsortedList.insertItem(21);
	unsortedList.insertItem(50);
	unsortedList.insertItem(4920);
	unsortedList.insertItem(69);
	unsortedList.insertItem(1738);
	unsortedList.insertItem(58008); //adds items to list
	unsortedList.insertItem(101);
	unsortedList.insertItem(14);
	unsortedList.insertItem(27);
	unsortedList.insertItem(999);
	unsortedList.insertItem(5);
	unsortedList.insertItem(4);
	unsortedList.insertItem(3);
	unsortedList.insertItem(2);
	unsortedList.insertItem(1);
	unsortedList.resetList(); //resets position to head

	UnsortedType list1;
	UnsortedType list2; //creates new list
	list1.insertItem(420);
	list1.insertItem(69);
	list1.insertItem(1738); //inserts items to list1
	list1.insertItem(58008);
	list1.insertItem(999);
	list1.resetList();

	list2.insertItem(11);
	list2.insertItem(111);
	list2.insertItem(1111); //inserts items to list2
	list2.insertItem(11111);
	list2.insertItem(111111);
	list2.resetList();

	/*for (int i = 0; i < 4; i++)
		cout << list1.getNextItem() << endl;					//will print items from list 1 for debugging
	cout << "\n \n \n \n";*/
	/*for (int i = 0; i < 4; i++)
		cout << list2.getNextItem() << endl;*/					//will pring items from list 2 for debugging
	UnsortedType newlist; //creates a new list
	node* testptr = list1.returnHead(); //creates testptr as holding spot for memory location of node's
	newlist.Union(list1.returnHead(), list2.returnHead());		//connects two lists together provides lists' headers	
	//cout << endl << list1.getItem(69);						//searches list to find data value
	return 0;
}