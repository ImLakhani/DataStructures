#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <thread>

namespace DataStructures
{

class Stack
{
public:
	Stack();
	~Stack();
	int Pop();
	void Push(int element);
	bool isEmpty();
	int Size();
	int Top();
};

class StackUnderFlowException 
{
    public:
        StackUnderFlowException(); 
};

class StackOverFlowException 
{
    public:
        StackOverFlowException(); 
};

}

#endif // STACK_H

