//
// Created by Miguel Salvador on 11/29/23.
//

#include "LinkedList.h"
#include <iostream>

template<typename T>
Node<T>::Node(const T& value) : data(value), next(nullptr), prev(nullptr) {}

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

template<typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template<typename T>
void LinkedList<T>::pushback(const T &value) {
    Node<T>* newNode = new Node<T>(value);

    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

template<typename T>
void LinkedList<T>::display() {
    Node<T>* current = head;

    while (current) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
    std::cout << std::endl;
}

template<typename T>
void LinkedList<T>::clear() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}
