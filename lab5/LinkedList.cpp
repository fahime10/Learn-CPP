#include <iostream>
#include "LinkedList.h"
using std::cout;
using std::endl;

void LinkedList::init() {
	head_ = nullptr;
}

void LinkedList::cleanup() {
	// IMPLEMENT ME
}

void LinkedList::print() const {
	// IMPLEMENT ME
}

LNode* LinkedList::find(int t) const {
	// IMPLEMENT ME
	return nullptr; // stub
}

void LinkedList::insert_head(int t) {
	// IMPLEMENT ME
}

void LinkedList::insert_after(LNode* location, int t) {
	// IMPLEMENT ME
}

void LinkedList::remove(LNode* location) {
	// IMPLEMENT ME
}
