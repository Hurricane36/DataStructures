//
//  LinkedList.h
//  DataStructures
//
//  Created by Tolman, Caiden on 2/7/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "List.hpp"
using namespace std;

template <class Type>
class LinkedList: public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    LinkedList();
    virtual ~LinkedList();
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //Type setAtindex(int index, Type item);
    bool contains(Type item);
    virtual void add(Type item);
    virtual void addAtINdex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    LinkedList<Type> :: LinkedList()
    {
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
    
LinkedList<Type> :: ~LinkedList()
    {
        LinearNode<Type> * destroyStructure = front;
        while (front != nullptr)
        {
            front = destroyStructure->getNextNode();
            delete destroyStructure;
            destroyStructure = front;
        }
    }
void LinkedList<Type> :: add(Type item)
    {
        LinearNode<Type> * newData = new LinearNode<Type>(item);
        
        if(this->size == 0)
        {
            this->front = newData;
            {
                else
                {
                    this->end->NextNode(newData);
                }
                
                this->end = newData;
                
                this->size += 1;
            }
void LinkedList<Type> :: addAtIndex(int index, Type item)
            {
                assert(index >=0 && index <= this->size);
                if(index == this->size)
                {
                    add(item);
                }
                else
                {
                    LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
                    if (index== 0)
                    {
                        toBeAdded->setNextNode(front);
                        front = toBeAdded;
                    }
                    else
                    {
                        LinearNode<Type> * previos = nullptr;
                        LinearNode<Type> * current = front;
                        for (int position = 0; position < index; position++)
                        {
                            previous = current;
                            current = current->getNextNode();
                        }
                    }
                    previous->setNextNode(toBeAdded);
                    toBeAdded->setNextNode(current);
                }
                this->size++;
            }
template <class Type>
            bool LinkedList<Type> ::contains(Type thingToFind)
            {
                bool exists = false;
                
                LinearNode<Type> * searcuPointer = front;
                
                for (int index = 0; index < getSize(); index++)
                {
                    if (searchPointer->getData() == thingToFind)
                    {
                        exist = true;
                    }
                    searchPointer = searchPointer->getNextNode();
                }
                
                return exists;
            }
};

#endif /* LinkedList_h */
