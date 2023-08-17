# Doubly Linked Lists in C

## General

A **doubly linked list** is a type of data structure used in computer science to organize and manage a collection of elements. It is similar to a singly linked list, but with an important difference: each node in a doubly linked list contains two pointers or references instead of just one. These two pointers, usually called "prev" and "next," allow each node to point to both the previous node and the next node in the list.

The structure of a doubly linked list node typically includes three components:
- **Data**: The actual value or payload that the node holds.
- **Previous Pointer ("prev")**: A pointer/reference to the previous node in the list.
- **Next Pointer ("next")**: A pointer/reference to the next node in the list.


## How to Use Doubly Linked Lists

To use a doubly linked list, you need to perform several operations:

1. **Insertion**: You can insert elements at the beginning, end, or any specific position within the list. When inserting a new node, you need to update the "prev" and "next" pointers of the adjacent nodes to maintain the linkage.

2. **Deletion**: You can remove nodes from the list, which involves updating the "prev" and "next" pointers of neighboring nodes to bypass the node being deleted.

3. **Traversal**: You can traverse the list in either direction (forward or backward) by following the "next" and "prev" pointers, respectively.

4. **Searching**: You can search for a specific element in the list by traversing through it.

5. **Updating**: You can update the data within a node if needed.

Doubly linked lists offer several advantages over singly linked lists, such as easier traversal in both directions and the ability to efficiently remove nodes from the middle of the list. However, they also require slightly more memory due to the additional "prev" pointers.
