//
//  LinkedList.cpp
//  Linked List
//
//  Created by fushuyue on 5/7/16.

#include "LinkedList.hpp"
#include <iostream>


void linkedList::construct(Item item)
{
	head -> item = item;
	head -> next = NULL;
	length = 0;
}


void linkedList::insert(link x, int position)
{
	if ((position <= 0) || (position > length + 1))
	{
		std::cout << "nError: the given position is out of range.n";
	}
	
	// if length is one
	if (head -> next == NULL)
	{
		head -> next = x;
		length ++ ;
	}
	
	// if length is more than one, loop through the list
	int count = 0;
	Node p = head;
	Node q = head;
	while(q)
	{
		// make last one points to x
		// x points to next one
		if (count == position) {
			p -> next = x;
			x -> next = q;
			length ++;
		}
		
		// let p be the last one, q be the next one
		p = q;
		q = p -> next;
		count ++;
	}
	std::cout << "nError: nothing was added to the list.n";
}

void linkedList::remove(int position)
{
	if ((position <= 0) || (position > length + 1))
	{
		std::cout << "nError: the given position is out of range.n";
	}
	
	if (position ==1 )
	{
		std::cout << "nError: there is nothing to remove.n";
	}
	
	int count = 0;
	Node p = head;
	Node q = head;
	while (q)
	{
		if (count == position) {
			p -> next = q -> next;
			delete q;
			length --;
		}
		
		p = q;
		q = p -> next;
		count ++;
	}
	std::cout << "nError: nothing was removed from the list.n";
}

link linkedList::next(link x)
{
	return x->next;
}

Item linkedList::item(link x)
{
	return x->item;
}

void linkedList::printList()
{
	node * p = head;
	node * q = head;
	std::cout << "---------------------------";
	std::cout << "list detail";
	while (q)
	{
		int count = 0;
		p = q;
		std::cout << "-----------------------------";
		std::cout << "node position: " << count <<std::endl;
		std::cout << "node item:     " << p -> item << std::endl;
		q = p -> next;
		count++;
	}
}


linkedList::~linkedList()
{
	node * p = head;
	node * q = head;
	
    // loop through the list to delete every node until last null node
	while (q)
	{
		p = q;
		q = p -> next;
		if (q) delete p;
	}
}













