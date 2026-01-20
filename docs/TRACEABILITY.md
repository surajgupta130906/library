# Traceability Matrix

## What is Traceability?
Traceability ensures that every user requirement (user story) is properly
implemented in code, verified through testing, and delivered through a
specific sprint and Git release tag.

This helps in tracking requirements from design to implementation and testing.

---

## Traceability Table

| User Story ID | Description                                   | Sprint   | Code File / Function                     | Testing Method            | Git Tag |
|--------------|-----------------------------------------------|----------|-------------------------------------------|---------------------------|---------|
| US-1         | Add a book with ID, title, and author          | Sprint-1 | Library::addBook() in library.cpp          | Manual test / output      | v0.1    |
| US-2         | Reject duplicate Book IDs                     | Sprint-1 | Library::addBook() validation logic        | Manual test (duplicate)   | v0.1    |
| US-3         | Borrow an available book                      | Sprint-2 | Library::borrowBook()                     | Manual test / output      | v0.2    |
| US-4         | Prevent borrowing an already borrowed book    | Sprint-2 | Library::borrowBook() status check         | Manual test (error case)  | v0.2    |
| US-5         | Return a borrowed book                        | Sprint-2 | Library::returnBook()                     | Manual test / output      | v0.2    |
| US-6         | Generate library status report                | Sprint-3 | Library::generateReport()                 | Manual report verification| v0.3    |



#Notes
develop  using a three-sprint Agile model.
each sprint was developed in a separate Git branch and merged into 'main'.
Git tags v0.1, v0.2, and v0.3 mark the completion of Sprint-1, Sprint-2, and Sprint-3 respectively.
 The system uses in-memory data structures only, with no database usage.

