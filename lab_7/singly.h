#ifndef SINGLE_H
#define SINGLE_H

#include <iostream>
#include <memory>
#include "node.h"

template<typename T>
class SinglyLinkedList {
private:
    std::shared_ptr<Node<T>> head;
    int size;

public:
    SinglyLinkedList() : head(nullptr), size(0) {}


    void push_back(T value) {
        auto newNode = std::make_shared<Node<T>>(value);

        if (!head) {
            head = newNode;
        } else {
            auto temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }


    void push_front(T value) {
        auto newNode = std::make_shared<Node<T>>(value);

        newNode->next = head;
        head = newNode;

        size++;
    }


    void pop_front() {
        if (!head) throw std::runtime_error("Список порожній");

        head = head->next;
        size--;
    }


    T get(int index) {
        if (index < 0 || index >= size)
            throw std::out_of_range("Невірний індекс");

        auto temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp->data;
    }

    // пошук
    int find(T value) {
        auto temp = head;
        int index = 0;

        while (temp) {
            if (temp->data == value)
                return index;
            temp = temp->next;
            index++;
        }

        return -1;
    }


    void print() {
        auto temp = head;

        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }

        std::cout << "nullptr\n";
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }
};

#endif