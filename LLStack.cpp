/**
 * Created by ahmad on 11/26/16.
 */

#include "LLStack.h"

template <class type> LLStack<type>::LLStack()
{
    this->size = 0;
    this->head = nullptr;
}

template <class type> void LLStack<type>::push(type data)
{
    size++;
    LLStackNode <type>*newNode = new LLStackNode<type>;
    newNode->data = data;
    newNode->last = this->head;
    this->head = newNode;
}

template <class type> type *LLStack<type>::pop(type &data)
{
    size--;
    data = head->data;
    LLStackNode <type>*lastTemp = head->last;
    delete head;
    head = lastTemp;
    return &data;
}
template <class type> type LLStack<type>::last()
{
    return (head->data)? head->data: nullptr;
}
template <class type> bool LLStack<type>::isEmpty()
{
    return this->size == 0;
}

template <class type> long LLStack<type>::getSize()
{
    return this->size;
}

