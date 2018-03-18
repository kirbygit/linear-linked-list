//
//  Node.hpp
//  linear-linked-list-review
//
//  Created by bruh on 3/17/18.
//  Copyright © 2018 advance. All rights reserved.
//

#pragma once
#ifndef Node_hpp
#define Node_hpp

class Node
{
public:
    int data;
    // pointer that points to the next node
    Node* next;
    
    // default constructor
    Node()
    {
        data = 0;
        next = nullptr;
    }
    
    // constructor overloading
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
    
    // accessors and mutators
    int getData()
    {
        return data;
    }
    
    void setData(int x)
    {
        this->data = x;
    }
    
    Node* getNext()
    {
        return next;
    }
    
    void setNext(Node* n)
    {
        this->next = n;
    }
};

#include <stdio.h>

#endif /* Node_hpp */
