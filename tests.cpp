#include <cassert>

int main() {
    Library lib;
    lib.addBook("B1", "C++", "Bjarne");
    lib.addBook("B2", "Python", "Guido");
    // Duplicate ID handled internally
    return 0;
}

