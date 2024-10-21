# **Linked List in C++**
# Experiment 17 To study and implement Linked List

## Aim: - 
To run and execute a menu style code of linked list 


## Theory

A **Linked List** is a linear data structure where elements, called **nodes**, are stored in sequence, but unlike arrays, they are not stored in contiguous memory locations. Each node contains two parts:
1. **Data**: The value or data of the node.
2. **Pointer**: A reference (or pointer) to the next node in the sequence.

The last node in a linked list points to `NULL`, indicating the end of the list.

### **Types of Linked Lists**:
1. **Singly Linked List**:
   - Each node points to the next node in the sequence.
   - Traversal is unidirectional (from head to the last node).
   
2. **Doubly Linked List**:
   - Each node points to both the next node and the previous node.
   - Traversal can be bidirectional.

3. **Circular Linked List**:
   - The last node points back to the first node, forming a loop.

### **Basic Operations on Linked List**:
1. **Insertion**:
   - Adding a new node to the linked list at the beginning, end, or at a specific position.
   
2. **Deletion**:
   - Removing a node from the list by modifying pointers.
   
3. **Traversal**:
   - Visiting each node of the linked list to access or update its data.
   
4. **Search**:
   - Finding a node in the list by comparing node data.

### **Singly Linked List Implementation in C++**

Here’s how you can implement a basic **Singly Linked List** in C++:


### **Explanation of the Code**:
1. **Node Structure**: Each `Node` consists of two parts:
   - `data`: Stores the actual value.
   - `next`: A pointer to the next node in the list.

2. **LinkedList Class**:
   - Contains a pointer `head` to the first node in the list.
   - Functions include:
     - **Insert**: Adds a new node to the end of the list.
     - **Delete**: Deletes a node with a specific value.
     - **Display**: Prints the entire list.

3. **Main Function**: Provides a menu to perform various operations like insertion, deletion, and displaying the list.

### **Advantages of Linked List**:
1. **Dynamic Size**: Unlike arrays, linked lists are dynamic and can grow or shrink in size during runtime.
2. **Efficient Insertions/Deletions**: Insertions and deletions are easier and more efficient than in arrays, especially at the beginning or middle.

### **Disadvantages of Linked List**:
1. **No Random Access**: Elements must be accessed sequentially from the head node, making access time slower compared to arrays.
2. **Extra Memory Overhead**: Each node requires additional memory for the pointer (`next`), leading to increased memory consumption compared to arrays.

This C++ code provides a simple implementation of a **singly linked list** with basic operations.

## Code
```
// program to implement Singly Linked list in C++ using class

#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
    /*void disp(){
        cout<<data<<"   "<<next;
    }*/
};

int main(){
    Link* l1 = new Link(6);
    cout<<l1->data<<"   "<<l1->next;
    //l1.disp();
}
```

```

#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
};
void insert_head(Link* &head, int data){
    Link* new_node=new Link(data);
    new_node->next = head;
    head = new_node;
}
void disp(Link* head){
    Link* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Link* head = NULL;
    insert_head(head, 30);
    disp(head);
    insert_head(head, 32);
    disp(head);
    insert_head(head, 35);
    disp(head);
    //l1.disp();
}
```

## Code Output:




## Conclusion
We learnt how to implement single linked list in c++
