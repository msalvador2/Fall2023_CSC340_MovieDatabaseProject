//
// Created by Miguel Salvador on 11/29/23.
//

#ifndef MOVIEDATABASEPROJECT_LINKEDLIST_H
#define MOVIEDATABASEPROJECT_LINKEDLIST_H

template <typename T>
class Node {
public:
    Node(const T& value);

    T data;
    Node* next;
    Node* prev;
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    //Constructor & Destructor
    LinkedList();
    ~LinkedList();

    //Functions
    void pushback(const T& value);
    void display();
    void clear();
};

#endif //MOVIEDATABASEPROJECT_LINKEDLIST_H
