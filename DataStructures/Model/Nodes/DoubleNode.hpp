//
//  DoubleNode_hpp.h
//  DataStructures
//
//  Created by Tolman, Caiden on 2/21/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//
#include "Node.hpp"
#ifndef DoubleNode.hpp
#define DoubleNode.hpp

template <class Type>
class DoubleNode: public Node<Type>
{
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type * next;
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);
    
    DoubleNode<Type> * getPrevious();
    DoubleNode<Type> * getNext();
    void setPrevios(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}
template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}
template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type>* next)
{
    this->next = next;
}
template <class Type>
void DoubleNode<Type> :: setPrevious(DoubleNode<Type>* previous)
{
    this->previous = previous;
}
template <class Type>
DoubleNode<Type> * DoubleNode<TYpe> :: getPrevious()
{
    return previous;
}
template <class Type>
    DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

#endif /* DoubleNode_hpp_h */
