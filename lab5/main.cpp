#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
	LinkedList mylist;
	mylist.init();
	mylist.print();
	mylist.insert_head(1);
	mylist.insert_head(2);
	mylist.insert_head(3);
	mylist.print();
    cout << "\n" << endl;
	LNode* result = mylist.find(3);
    cout << "Result: " << result << "\n" << endl;
	if (result != nullptr) mylist.insert_after(result, 4);
	mylist.print();
    cout << "\n" << endl;
	mylist.remove(mylist.find(3));
	mylist.print();
    cout << "\n" << endl;
	mylist.remove(mylist.find(2));
	mylist.print();
    cout << "\n" << endl;
	mylist.remove(mylist.find(4));
	mylist.print();
    cout << "\n" << endl;
	mylist.remove(mylist.find(1));
	mylist.print();
	mylist.cleanup();
}
