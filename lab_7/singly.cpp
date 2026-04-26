#include <iostream>
#include "singly.h"
#include "double.h"

int main() {
    try {

        std::cout << " Singly Linked List \n";

        SinglyLinkedList<int> s;

        s.push_back(10);
        s.push_back(20);
        s.push_front(5);

        std::cout << "List: ";
        s.print();

        std::cout << "Size: " << s.getSize() << std::endl;
        std::cout << "Element [1]: " << s.get(1) << std::endl;
        std::cout << "Find 20: " << s.find(20) << std::endl;

        s.pop_front();

        std::cout << "After pop_front: ";
        s.print();

        std::cout << " Doubly Linked List ";

        DoublyLinkedList<int> d;

        d.push_back(10);
        d.push_back(20);
        d.push_front(5);

        std::cout << "Forward: ";
        d.print_forward();

        std::cout << "Backward: ";
        d.print_backward();

        std::cout << "Size: " << d.getSize() << std::endl;
        std::cout << "Element [1]: " << d.get(1) << std::endl;

        d.insert(1, 15);

        std::cout << "After insert(1, 15): ";
        d.print_forward();

        d.remove(2);

        std::cout << "After remove(2): ";
        d.print_forward();

        std::cout << "Find 20: " << d.find(20) << std::endl;

        d.pop_back();

        std::cout << "After pop_back: ";
        d.print_forward();
    }
    catch (const char* msg) {
        std::cout << "Error: " << msg << std::endl;
    }

    return 0;
}