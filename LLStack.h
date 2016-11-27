/**
 * Impelementation of stack with Linked List.
 *
 * -------------------------------------------------------------
 * Created by ahmad on 11/26/16.
 */
#ifndef STACK_LLSTACK_H
#define STACK_LLSTACK_H

#define nullptr 0

template <class type>
class LLStackNode
{
public:
    type data;
    LLStackNode *last;
};

template <class type> class LLStack {
private:
    long size;
    LLStackNode <type>*head;

public:
    LLStack();
    void push(type data);
    type *pop(type &data);
    type last();
    bool isEmpty();
    long getSize();
};

#include "LLStack.cpp"
#endif //STACK_LLSTACK_H
