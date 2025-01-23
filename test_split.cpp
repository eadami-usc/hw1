/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include "iostream"
#include <cstddef>

// function to print linked lists
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        std::cout << curr->value;
        if (curr->next)
            std::cout << " -> ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

// function to free dynamically allocated memory
void cleanupList(Node* head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main(int argc, char* argv[])
{
    Node* in = nullptr;
    Node* odds = nullptr;
    Node* evens = nullptr;

    // test 1: empty list
    split(in, odds, evens);
    std::cout << "Test 1 - Empty list:\nOdds: ";
    printList(odds);
    std::cout << "Evens: ";
    printList(evens);
    cleanupList(odds);
    cleanupList(evens);

    // test 2: 1
    in = new Node(1, nullptr);
    odds = evens = nullptr;
    split(in, odds, evens);
    std::cout << "\nTest 2 - 1:\nOdds: ";
    printList(odds);
    std::cout << "Evens: ";
    printList(evens);
    cleanupList(odds);
    cleanupList(evens);

    // test 3: 1,2,3,4,5,6
    in = new Node(1, new Node(2, new Node(3, new Node(4, new Node(5, new Node(6, nullptr))))));
    odds = evens = nullptr;
    split(in, odds, evens);
    std::cout << "\nTest 3 - 1,2,3,4,5,6:\nOdds: ";
    printList(odds);
    std::cout << "Evens: ";
    printList(evens);
    cleanupList(odds);
    cleanupList(evens);

    // test 4: 1,3,5
    in = new Node(1, new Node(3, new Node(5, nullptr)));
    odds = evens = nullptr;
    split(in, odds, evens);
    std::cout << "\nTest 4 - 1,3,5:\nOdds: ";
    printList(odds);
    std::cout << "Evens: ";
    printList(evens);
    cleanupList(odds);
    cleanupList(evens);

    // test 5: 2,4,6
    in = new Node(2, new Node(4, new Node(6, nullptr)));
    odds = evens = nullptr;
    split(in, odds, evens);
    std::cout << "\nTest 5 - 2,4,6:\nOdds: ";
    printList(odds);
    std::cout << "Evens: ";
    printList(evens);
    cleanupList(odds);
    cleanupList(evens);

    // test 6: 1,2,4,3,5
    in = new Node(1, new Node(2, new Node(4, new Node(3, new Node(5, nullptr)))));
    odds = evens = nullptr;
    split(in, odds, evens);
    std::cout << "\nTest 6 - 1,2,4,3,5:\nOdds: ";
    printList(odds);
    std::cout << "Evens: ";
    printList(evens);
    cleanupList(odds);
    cleanupList(evens);

    return 0;
}