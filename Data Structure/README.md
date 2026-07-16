# Data Structures in Embedded C

This repository contains efficient, low-level data structure implementations written in C, tailored for embedded systems.

## 1. Singly Linked List

A dynamic singly linked list implementation supporting efficient insertion and search operations.

### File Structure
* `linked_list.c` - Core implementation and main test application.

### Supported Operations
* **Push Front:** Adds a node to the beginning of the list ($O(1)$ time complexity).
* **Push Back:** Appends a node to the end of the list ($O(N)$ time complexity).
* **Search:** Searches for a specific integer value in the list ($O(N)$ time complexity).
* **Display:** Traverses and prints the entire linked list.

### Memory Management Note
This implementation uses dynamic memory allocation (`malloc`). In ultra-low-power or safety-critical embedded systems (like MISRA-C environments), heap allocation is often restricted. Future updates will include static memory pool implementations.

---

## 2. Upcoming Implementation Roadmap

The next data structures to be added to this folder are:

* [ ] **Stack (LIFO - Last In First Out)**
  * Static implementation using arrays (highly optimized for embedded systems).
  * Stack_Arr.c includes the implementation of stack using array
  * Dynamic implementation using linked lists.
  * Operations: `push()`, `pop()`, `peek()`, `isEmpty()`, `isFull()`.
   
* [ ] **Queue (FIFO - First In First Out)**
  * Circular Queue / Ring Buffer implementation (crucial for UART/SPI peripheral drivers).
  * Operations: `enqueue()`, `dequeue()`, `isEmpty()`, `isFull()`.

---


