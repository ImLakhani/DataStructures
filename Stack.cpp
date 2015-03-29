#include "Stack.h"

namespace DataStructures
{		
const int maxSize = 3;
int top;
int data[maxSize];	
Stack::Stack()
{
	top = -1;
}

Stack::~Stack()
{
	
}

void Stack::Push(int element)
{
	if(top >= maxSize){
		throw new StackOverFlowException();
		}
	data[++top] = element;
}

int Stack::Pop(){
	if(top == -1){
		throw new StackUnderFlowException();
		}
	return data[top--];
	}
	
bool Stack::isEmpty(){	
		return(top == -1)?true:false;
	}
int Stack::Size(){
		return top+1;
	}
int Stack::Top(){
		return data[top];
	}	

StackUnderFlowException::StackUnderFlowException() 
{
	std::cout << "Stack underflow" << std::endl;
}

StackOverFlowException::StackOverFlowException() 
{
	std::cout << "Stack OverFlow" << std::endl;
}
}



