/**
 * Impelementation of stack with Linked List.
 *
 * -------------------------------------------------------------
 * Created by ahmad on 11/26/16.
 */
#ifndef STACK_LLSTACK_H
#define STACK_LLSTACK_H


template <class type> class LLStack {
private:

public:
    LLStack();
    void push(type data);
    type pop();
    bool isEmpty();
    long size();
};

#include "LLStack.cpp"
#endif //STACK_LLSTACK_H
