# Stacks-and-Queues
 C++ programs for Stack and Queue data structures
Stacks and Queues in C++
Stacks and Queues in C++

1. Introduction

This repository contains C++ programs that demonstrate the implementation of Stack and Queue data structures using arrays and linked lists. It is created as part of the CCE II activity for Unit IV: Stacks and Queues.

2. Objectives

- To understand Stack and Queue data structures.
- To implement Stack using an array and a linked list.
- To implement Queue using an array and a linked list.
- To understand the LIFO and FIFO principles.
- To practise Git and GitHub for source code management and version control.
- To maintain proper source code documentation.

3. Programs Included

3.1 Stack Using Array ("stack_array.cpp")

A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle. The last inserted element is removed first.

Operations:

- Push: Inserts an element into the stack.
- Pop: Removes the top element.
- Peek: Displays the top element.
- Display: Displays the stack elements.
- Overflow and underflow handling.

3.2 Stack Using Linked List ("stack_linkedlist.cpp")

This program implements a Stack using dynamically allocated linked-list nodes. The top pointer identifies the topmost element.

Operations:

- Push: Inserts a new node at the top.
- Pop: Removes the top node.
- Peek: Displays the top element.
- Display: Displays all stack elements.
- Underflow handling when the stack is empty.

3.3 Queue Using Array ("queue_array.cpp")

A Queue is a linear data structure that follows the FIFO (First In, First Out) principle. The first inserted element is removed first.

Operations:

- Enqueue: Inserts an element at the rear.
- Dequeue: Removes an element from the front.
- Display: Displays queue elements.
- Overflow and underflow handling.

3.4 Queue Using Linked List ("queue_linkedlist.cpp")

This program implements a Queue using linked-list nodes and front and rear pointers.

Operations:

- Enqueue: Adds a new node at the rear.
- Dequeue: Removes a node from the front.
- Display: Displays all queue elements.
- Underflow handling when the queue is empty.

4. Repository Structure

Stacks-and-Queues/
├── stack_array.cpp
├── stack_linkedlist.cpp
├── queue_array.cpp
├── queue_linkedlist.cpp
└── README.md

5. Software Requirements

- C++ compiler such as GCC or G++.
- Git for version control.
- GitHub account for hosting the repository.

6. How to Compile and Run

Compile and run each program separately.

Stack Using Array

g++ stack_array.cpp -o stack_array
./stack_array

Stack Using Linked List

g++ stack_linkedlist.cpp -o stack_linkedlist
./stack_linkedlist

Queue Using Array

g++ queue_array.cpp -o queue_array
./queue_array

Queue Using Linked List

g++ queue_linkedlist.cpp -o queue_linkedlist
./queue_linkedlist

On Windows, run the corresponding ".exe" file after compilation.

7. Testing

The programs should be tested using the following cases:

1. Insert elements and display them.
2. Remove elements and verify the correct order.
3. View the top element of a stack.
4. Attempt to remove an element from an empty stack or queue.
5. Attempt to insert beyond the array capacity in array-based implementations.
6. Insert and remove several elements in linked-list implementations.
7. Verify that the linked-list queue updates its front and rear pointers correctly when elements are removed.

8. Difference Between Stack and Queue

Feature| Stack| Queue
Principle| LIFO| FIFO
Insertion| Push| Enqueue
Deletion| Pop| Dequeue
Main pointers| Top| Front and rear
Applications| Function calls, undo operations| Scheduling, waiting lists

9. Git and GitHub Version Control

Git is used to track changes in source code, while GitHub hosts the repository online.

Common Git commands:

git init
git add .
git commit -m "Add stack and queue programs"
git push

Meaning of commands:

- "git init": Initializes a Git repository.
- "git add .": Stages file changes.
- "git commit": Records changes with a message.
- "git push": Uploads committed changes to GitHub.

Meaningful commit messages should be used whenever files are added or updated.

10. Conclusion

This project demonstrates the implementation of Stack and Queue data structures using arrays and linked lists in C++. It helps develop an understanding of insertion, deletion, traversal, memory management, and the LIFO and FIFO principles. Git and GitHub support organized source code storage, documentation, and version control.

11. Learning Outcomes

After completing this activity, students should be able to:

- Explain the working of Stack and Queue data structures.
- Implement these structures using arrays and linked lists.
- Identify overflow and underflow conditions.
- Compare array-based and linked-list implementations.
- Use basic Git commands to maintain a repository.

12. Submission

GitHub Repository URL: [Paste your actual repository link here]

The repository contains the four C++ programs and this README documentation for evaluation.