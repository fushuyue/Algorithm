//
//  LinkedList.hpp
//  Linked List
//
//  Created by fushuyue on 5/7/16.


#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

typedef int Item;

struct node{
	
	Item item;
	node *next;
	
};

typedef node *link;
typedef link Node;

class linkedList
{
private:
	
	node *head;
	int length;
	// the head node does not counted in the length
	
public:
	
	// creates the head node
	void construct(Item);

	
	Node newNode(int);
	
	
	void deleteNode(Node);
	
	// insert a new node at some certain position
	void insert(Node, int);
	
	// remove a new node at some certain position
	void remove(int);
	
	// return the next node
	Node next(Node);
	
	// return the item of the node
	Item item(Node);
	
	// print the list
	void printList();
	
	// delete the whole list
	~linkedList();
	
};




#endif /* LinkedList_hpp */
