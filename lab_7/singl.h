//
// Created by Користувач on 26.04.2026.
//

#ifndef UNTITLED_SINGL_H
#define UNTITLED_SINGL_H
#include <iostream>
#include <memory>
#include "node.h"

template<typename T>
class SinglyLinkedList
{
private:
    std::shared_ptr<Node<T>> head;
    int size;

public:
    SinglyLinkedList() : head(nullptr), size(0) {}
};

#endif //UNTITLED_singl_H