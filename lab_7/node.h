//
// Created by Користувач on 26.04.2026.
//

#ifndef UNTITLED_NODE_H
#define UNTITLED_NODE_H
#include <memory>
#include <iostream>
#include "singly.h"

template<typename T>
struct Node {
    T data;
    std::shared_ptr<Node<T>> next;
    std::shared_ptr<Node<T>> prev;

    Node(T value) : data(value), next(nullptr), prev(nullptr) {}
};

#endif //UNTITLED_NODE_H