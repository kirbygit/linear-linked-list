//
//  LinkedList.hpp
//  linear-linked-list-review
//
//  Created by bruh on 3/17/18.
//  Copyright © 2018 advance. All rights reserved.
//

#pragma once
#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList
{
public:
    Node* Head;
    
    // implement functions
    
    // func to add Node at the front
    int addAtFront(Node* n);
    // func to check whether Linked List is empty or not
    int isEmpty();
    // func to add Node at the end
    int addAtEnd(Node* n);
    // func to search for a value
    Node* search(int k);
    // func to delete any Node
    Node* deleteNode(int x);
    // func to retrieve the last Node
    Node* getLastNode();
};

#include <stdio.h>

#endif /* LinkedList_hpp */
