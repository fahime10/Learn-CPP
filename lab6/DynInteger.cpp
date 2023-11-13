#include "DynInteger.h"

DynInteger::DynInteger() {
    this->n = new int;
    *n = 0;
}

DynInteger::DynInteger(int n) {
    this->n = new int;
    *this->n = n;
}

DynInteger::DynInteger(DynInteger &other) {
    *this->n = *other.n;
}

int DynInteger::get() {
    return *n;
}

void DynInteger::set(int n) {
    *this->n = n;
}

DynInteger::~DynInteger() {
    delete n;
}

int main() {
    DynInteger i1(5);
    DynInteger i2 = i1;
    i1.set(3);
    cout<<i1.get()<<endl;
    cout<<i2.get()<<endl;
    return 0;
}
