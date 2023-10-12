# Technical Write-up for Doubly Linked List Tasks

In this technical write-up, we will discuss various C programming tasks related to doubly linked lists. Each task involves implementing specific functions to manipulate and work with doubly linked lists.

## Task 0: Print List
### Function Signature:
```c
size_t print_dlistint(const dlistint_t *h);
```

This task involves implementing a function that prints all the elements of a doubly linked list. The function takes a pointer to the head of the list and returns the number of nodes in the list. The function should traverse the list from the head to the end, printing each node's data value, and counting the number of nodes. It should have the format demonstrated in the example.

## Task 1: List Length
### Function Signature:
```c
size_t dlistint_len(const dlistint_t *h);
```

For this task, the objective is to create a function that returns the number of elements in a doubly linked list. The function receives the head of the list as an argument and should traverse the list while counting the nodes until it reaches the end. The function then returns the count.

## Task 2: Add Node
### Function Signature:
```c
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

The goal of this task is to implement a function that adds a new node at the beginning of a doubly linked list. The function receives a pointer to the head of the list and an integer value to be added to the new node. It should create a new node, set its data value to the given integer, and properly link it to the existing list, making it the new head of the list.

## Task 3: Add Node at the End
### Function Signature:
```c
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

This task involves writing a function that adds a new node at the end of a doubly linked list. It takes a pointer to the head of the list and an integer value to add to the new node. The function should create a new node, set its data value, and link it to the last node in the list, updating the previous last node's `next` pointer accordingly.

## Task 4: Free List
### Function Signature:
```c
void free_dlistint(dlistint_t *head);
```

For this task, the objective is to implement a function that frees a doubly linked list. The function takes the head of the list as an argument and iterates through the list, freeing each node. It should also set the `next` and `prev` pointers of each node to NULL to avoid any dangling references.

## Task 5: Get Node at Index
### Function Signature:
```c
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```

This task involves creating a function that returns the nth node of a doubly linked list. The function receives the head of the list and an index, starting from 0. It should traverse the list and return the node at the specified index. If the node does not exist, it should return NULL.

## Task 6: Sum List
### Function Signature:
```c
int sum_dlistint(dlistint_t *head);
```

The objective of this task is to create a function that calculates and returns the sum of all the data values in a doubly linked list. The function should traverse the list, summing the data values, and return the total. If the list is empty, it should return 0.

## Task 7: Insert at Index
### Function Signature:
```c
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```

For this task, the goal is to implement a function that inserts a new node at a given position in a doubly linked list. The function takes a pointer to the head of the list, an index, and an integer value to insert. It should create a new node, insert it at the specified index, and update the adjacent nodes' pointers accordingly. If the insertion is not possible, it should return NULL.

## Task 8: Delete at Index
### Function Signature:
```c
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

This task involves creating a function that deletes a node at a given index in a doubly linked list. The function takes a pointer to the head of the list and an index. It should locate the node at the specified index, remove it from the list, and free its memory. The function should return 1 if it succeeds and -1 if it fails to delete the node.

## Task 9: Crackme4
### Password Recovery

The task involves finding the password for "crackme4" and saving it to a file named "100-password." The password is correct when the program prints "OK." The solution requires reverse engineering or analyzing the code to determine the correct input.

## Task 10: Palindromes
### Largest Palindrome Product

The goal is to find the largest palindrome made from the product of two 3-digit numbers. The result should be saved in a file named "102-result." This task involves mathematical computation to find the largest palindrome among the product of 3-digit numbers.

## Task 11: Crackme5 Keygen
### Password Generation

This task requires creating a keygen for "crackme5." The keygen program should take a username as a command-line argument and print a valid key for that username. To achieve this, you need to reverse engineer or analyze the code of "crackme5" to understand the key generation algorithm and then implement it in the keygen.

In conclusion, these tasks involve various operations on doubly linked lists, such as insertion, deletion, printing, and arithmetic operations on the data. Additionally, there are reverse engineering challenges related to password cracking and key generation. Successfully completing these tasks will demonstrate proficiency in data structures, algorithms, and low
