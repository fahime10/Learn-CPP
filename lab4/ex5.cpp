#include <iostream>
using namespace std;

int main() {

    int* p;
    p = new int[10];
    p[0] = 999;
    delete [] p;

    /**
     * a) Change the line p[0] = 999; to p[10] = 999;
     * This would be index out of bounds
     *
     * b) Remove the line delete [] p;
     * This will cause segmentation fault as memory is not freed
     *
     * c) Duplicate the line delete [] p;
     * User would be attempting to remove a pointer in memory
     * that is already removed, so process exit code would say error
     *
     * d) Change the line delete [] p; to delete p;
     * This would only delete the first element in the array, and not the
     * whole array
     *
     * e) Remove the line p = new int[10];
     * This is an error, the compiler would not know that it's meant
     * to be an array
     *
     *
     * f) Duplicate the line p = new int[10];
     * This would create a dangling pointer, in the sense that the 
     * previous 'new int[10]' has not been cleared out
     *
     *
     * g) Move the line p[0] = 999; to the end
     * This would be an error because pointer p is already deleted
     */

    return 0;
}
