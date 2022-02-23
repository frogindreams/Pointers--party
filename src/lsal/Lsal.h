#include <iostream>

/*
 * This needs to filename.h will be connected to main.cpp 
 * and won't be connected to other files, for instance, "unstd.h"
 */
#ifndef LASL_H
#define LSAL_H

class Node {
    int field;
    class Node *arrow;
    friend class Lsal;
};

class Lsal {
    private:
        Node *head;
        int count_of_nodes = 0;

    public:
        Lsal() { head = NULL; }

        int getCountOfNodes() { return count_of_nodes; }
        bool isEmpty() { return head == NULL; }
        int getValue(Node* arrow) { return arrow -> field; }
        void setValue(Node* arrow, int value) { arrow -> field = value; }
        
        void clear();
        void print();

        Node* CreateNode(int, Node*);
        Node* NextNode(Node*);
};

Node* Lsal::CreateNode(int number, Node* node = NULL) {
    Node *element = new Node();
    element -> field = number;
    ++count_of_nodes;
    
    /* add a new source */
    if (node == NULL) {
        if (head == NULL) {
            element -> arrow = NULL;
            head = element;
        } else {
            element -> arrow = head;
            head = element;
        }

        return element;
    }

    /* add a new arrow */
    element -> arrow = node -> arrow;
    node -> arrow = element;
    return element;
}

Node* Lsal::NextNode(Node* node) {
    if (isEmpty()) return NULL;
    return node -> arrow;
}

void Lsal::clear() {
    class Node *arrow = head;
    if (arrow == NULL) return;
    
    do {
        Node *del = arrow;
        arrow = NextNode(arrow);
        delete del;
    } while (arrow != NULL);

    count_of_nodes = 0;
    head = NULL;
}

void Lsal::print() {
    if (isEmpty()) { std::cout << '\n' << "The list is empty" << '\n'; return; }
    Node *arrow = head;

    do {
        std::cout << getValue(arrow) << " ";
        arrow = NextNode(arrow);
    } while (arrow != NULL);

    std::cout << '\n';
}

#endif
