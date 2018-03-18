//
//  LinkedList.cpp
//  linear-linked-list-review
//
//  Created by bruh on 3/17/18.
//  Copyright © 2018 advance. All rights reserved.
//

#include "LinkedList.hpp"

int LinkedList::addAtFront(Node *n)
{
    int i = 0;
    // making the next of the new Node points to Head
    n->next = Head;
    // making the new Node as Head
    Head = n;
    i++;
    // returns the new position where Node is added
    return i;
}

int LinkedList::addAtEnd(Node* n)
{
    int i = 0;
    // if list is empty
    if (Head == nullptr)
    {

        // making the new Node as Head
        Head = n;
        // making the next pointer of the new node as nullptr
        n->next = nullptr;
    }
    else
    {
        // getting the last Node
        Node* n2 = getLastNode();
        n2->next = n;
    }
    i++;
    return i;
}

Node* LinkedList::getLastNode()
{
    // create a pointer pointing to its Head
    Node* ptr = Head;
    // iterating over the list till the node whose Next pointer points to nullptr
    // return that node, because that will be the last node.
    while (ptr->next!=nullptr)
    {
        // if next is not nullptr, take the pointer one step forward
        ptr = ptr->next;
    }
    return ptr;
}
