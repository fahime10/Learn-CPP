#include<iostream>
using namespace std;

class DynInteger {
private:
    int * n;

public:
    /*Default constructor: Allocates memory for n and setsits value equal to 0.*/
    DynInteger();

    /*Constructor with one argument: Allocates memory for nand sets its value equal to value of the argument passedto the constructor. Make sure you use "this" keyword.*/
    explicit DynInteger(int n);

    DynInteger(DynInteger& other);

    /*Sets the value of n.*/
    void set(int n);

    /*Returns n.*/
    int get();

    /*Destructor: Releases memory.*/
    ~DynInteger();
};
