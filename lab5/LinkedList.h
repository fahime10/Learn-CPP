/*
 * LinkedList.h
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct LNode {
	int data_;
	LNode* next_;
	LNode* prev_;
};

/*
 * Create a container using a doubly linked list
 */
class LinkedList {
public:
	// Initialize the linkedlist to empty.
	// To be replaced by a constructor later!
	void init();

	// delete all nodes and release all memory.
	// To be replaced by a destructor later!
	void cleanup();

	// print all integers in the list, in order
	void print() const;

	// find integer t from the list, returning a pointer to that node.
	// if not found, return nullptr
	LNode* find(int t) const;

	// insert integer t to the list as the new head
	void insert_head(int t);

	// insert t as a new node after "location"
	// location is assumed to point to a valid position in the list
	void insert_after(LNode* location, int t);

	// remove the integer pointed to by "location"
	// location is assumed to point to a valid position in the list
	void remove(LNode* location);

private:
	LNode* head_;
};

#endif /* LINKEDLIST_H_ */
