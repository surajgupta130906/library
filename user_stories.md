# User Stories – Library Book Management System

This document describes the user stories implemented in the Library Book
Management System. The stories were developed and delivered incrementally
across three Agile sprints.

---

## Sprint 1: Book Registration

### User Story US-1
**As a librarian,**  
I want to add a new book with a unique Book ID, title, and author,  
So that the library can maintain a record of available books.

**Acceptance Criteria:**
- Book ID, title, and author must be provided
- Book is stored in the system successfully
- A success message is displayed after adding the book

---

### User Story US-2
**As a librarian,**  
I want the system to reject duplicate Book IDs,  
So that each book can be uniquely identified.

**Acceptance Criteria:**
- System checks if Book ID already exists
- Duplicate Book ID is not allowed
- An error message is shown for duplicate entries

---

## Sprint 2: Borrow and Return Book

### User Story US-3
**As a library user,**  
I want to borrow a book that is available,  
So that I can read the book.

**Acceptance Criteria:**
- Book must exist in the system
- Book status changes from Available to Borrowed
- Borrowing is confirmed with a message

---

### User Story US-4
**As a library user,**  
I want to be prevented from borrowing an already borrowed book,  
So that incorrect borrowing is avoided.

**Acceptance Criteria:**
- System checks the book’s availability
- Borrowing an unavailable book raises an error
- Book status remains unchanged

---

### User Story US-5
**As a library user,**  
I want to return a borrowed book,  
So that it becomes available for others.

**Acceptance Criteria:**
- Book must be currently borrowed
- Book status changes back to Available
- Return action is confirmed with a message

---

## Sprint 3: Library Report

### User Story US-6
**As a librarian,**  
I want to generate a library status report,  
So that I can view all books and their current availability.

**Acceptance Criteria:**
- Report displays Book ID, Title, Author, and Status
- Report includes all books in the system
- Status is shown as Available or Borrowed

