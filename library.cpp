#include <iostream>
#include <map>
using namespace std;

class Book {
public:
    string title;
    string author;
    bool borrowed;

    Book() {
        borrowed = false;
    }

    Book(string t, string a) {
        title = t;
        author = a;
        borrowed = false;
    }
};

class Library {
private:
    map<string, Book> books;

public:
    // Sprint-1: Add Book
    void addBook(string id, string title, string author) {
        if (books.find(id) != books.end()) {
            cout << "Error: Duplicate Book ID\n";
            return;
        }
        books[id] = Book(title, author);
        cout << "Book added successfully\n";
    }

    // Sprint-2: Borrow Book
    void borrowBook(string id) {
        if (books.find(id) == books.end()) {
            cout << "Error: Book not found\n";
            return;
        }
        if (books[id].borrowed) {
            cout << "Error: Book already borrowed\n";
            return;
        }
        books[id].borrowed = true;
        cout << "Book borrowed successfully\n";
    }

    // Sprint-2: Return Book
    void returnBook(string id) {
        if (books.find(id) == books.end()) {
            cout << "Error: Book not found\n";
            return;
        }
        books[id].borrowed = false;
        cout << "Book returned successfully\n";
    }
};

// Simple test in main
int main() {
    Library lib;

    lib.addBook("B1", "C++", "Bjarne");
    lib.addBook("B2", "Python", "Guido");

    lib.borrowBook("B1");
    lib.borrowBook("B1");   // should give error
    lib.returnBook("B1");

    return 0;
}

