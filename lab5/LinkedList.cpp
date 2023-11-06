#include <iostream>
#include "LinkedList.h"
using std::cout;
using std::endl;

void LinkedList::init() {
	head_ = nullptr;
}

void LinkedList::cleanup() {
	LNode* current_ = head_;

    while (current_) {
        LNode* temp = current_;
        current_ = current_->next_;
        delete temp;
    }
    cout << "Cleanup complete" << endl;
}

void LinkedList::print() const {
	if (head_ == nullptr) {
        return;
    }

    LNode* current_;
    current_ = head_;

    while (current_ != nullptr) {
        cout << current_->data_ << endl;
        current_ = current_->next_;
    }
}

LNode* LinkedList::find(int t) const {
	LNode* temp = head_;

    while (temp != nullptr) {
        if (temp->data_ == t) return temp;
        temp = temp->next_;
    }

	return temp;
}

void LinkedList::insert_head(int t) {
	auto temp = new LNode;
    temp->data_ = t;
    temp->next_ = head_;
    head_ = temp;
}

void LinkedList::insert_after(LNode* location, int t) {
	auto newNode = new LNode;
    newNode->data_ = t;
    newNode->next_ = location->next_;
    location->next_ = newNode;
}

void LinkedList::remove(LNode* location) {
	if (head_ == nullptr) {
        return;
    }

    if (head_->data_ == location->data_) {
        LNode* temp = head_;
        head_ = head_->next_;
        delete temp;
        return;
    }

    LNode* current = head_;
    LNode* prev = nullptr;

    while (current != nullptr && current->data_ != location->data_) {
        prev = current;
        current = current->next_;
    }

    if (current != nullptr) {
        prev->next_ = current->next_;
        delete current;
    }
}
