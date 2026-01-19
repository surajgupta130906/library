#include <iostream>
#include <map>
using namespace std;

class Book {
public:
    string title;
    string author;
};

class Library {
    map<string, Book> books;

public:
    void addBook(string id, string title, string author) {
        if (books.find(id) != books.end()) {
            cout << "Error: Duplicate Book ID\n";
            return;
        }
        books[id] = {title, author};
        cout << "Book added successfully\n";
    }
};

int main() {
    Library lib;
    lib.addBook("B1", "C++", "Bjarne");
    lib.addBook("B1", "Java", "James"); // duplicate
    return 0;
}

