#include <iostream>
using std::cout;
using std::endl;

struct Node {
	int data;
	Node* next;
};

// print all integers in the list, in order
void print(Node* head) {
//    Node* current;
//    current = head;
//	while (current != nullptr) {
//        cout << current->data << endl;
//        current = current->next;
//    }

    if (head == nullptr) {
        return;
    }

    cout << head->data << endl;
    print(head->next);
}

// find integer t from the list, returning a pointer to that node.
// If there are more than one match, return the first one.
// if not found, return nullptr
Node* find(Node* head, int t) {
//	Node* tmp = head;
//	while(tmp != nullptr) {
//		if (tmp->data == t) return tmp;
//		tmp = tmp->next;
//	}
//	return tmp;

    if (head == nullptr) {
        return nullptr;
    }

    if (head->data == t) {
        return head;
    }

    return find(head->next, t);
}

// insert integer t to the list as the new head
// (yep, you can pass pointers by reference!)
void insert_head(Node*& head, int t) {
	Node* tmp = new Node;
	tmp->data = t;
	tmp->next = head;
	head = tmp;
}

// insert t as a new node after "location"
// location is assumed to point to a valid position in the list
void insert_after(Node* location, int t) {
	Node* newNode = new Node;
    newNode->data = t;
    newNode->next = location->next;
    location->next = newNode;
}

// remove head from the list
void remove_head(Node*& head) {
	if (head->next == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// remove the NEXT integer i.e. AFTER the one pointed to by "location",
// NOT the one pointed to by it.
// location is assumed to point to a valid position in the list.
// If there is no next integer after location (i.e. location points to
// the last one) do nothing
void remove_after(Node* location) {
    if (location && location->next) {
        Node* nodeToRemove = location->next;
        location->next = location->next->next;
        delete nodeToRemove;
    }
}

// delete all nodes and release all memory
void cleanup(Node*& head) {
	while(head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
	// some example usage of these functions
	Node* mylist = nullptr;
	print(mylist);
	insert_head(mylist, 1);
	insert_head(mylist, 2);
	insert_head(mylist, 3);
	print(mylist);
	Node* result = find(mylist,3);
    cout << "\n" << endl;
	if (result != nullptr) insert_after(result, 5);
	print(mylist);
    cout << "\n" << endl;
	remove_head(mylist);
	print(mylist);
    cout << "\n" << endl;
	remove_after(find(mylist,5));
	print(mylist);
    cout << "\nCleanup: " << endl;
	cleanup(mylist);
	print(mylist);

}

