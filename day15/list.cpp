#include "list.hpp"
#include <iostream>

List::List()
    : head(NULL)
{
    // empty
}

void List::insert(int value)
{

    Node* node = new Node(value);
    Node* iter = head;

    if (iter == NULL)
    {
        head = node;
    }
    else 
    {
        while (iter->getNext() != NULL)
        {
            iter = iter->getNext();
        }
        
        iter->setNext(node);
    }
}

Node::Node(int value)
    : data(value), next(NULL)
{
    // empty
}