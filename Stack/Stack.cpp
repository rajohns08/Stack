#include "Stack.h"
#include <iostream>

using namespace std;

template <class T>
Stack<T>::Stack(int size)																		// Constructor with default value of 10 for size
{
	stackArray = new T[size];																	// Allocate space for the array on the heap
	top = -1;																					// Initially set top to -1 because no elements are in stack
	stackSize = size;																			// Initialize stackSize to the size passed in
}

template <class T>
void Stack<T>::push(T value)																	// Push a value onto the top of the stack
{
	if (!isFull())																				// Only allow the push to happen if the stack not full
	{
		stackArray[++top] = value;																// Push the value onto the stack after incrementing top
	}
	else
	{
		cout << "Cannot place the item on the stack, because the stack is full" << endl;
	}
}	

template <class T>
T Stack<T>::pop()																				// Pop an element off the top of the stack and return it
{
	if (!isEmpty())																				// Only allow a pop if the stack is not empty
	{
		top--;																					// Must decrement top before return or it won't happen
		return stackArray[top+1];																// Since we have already decremented top, return top+1 value
	}
	else
	{
		cout << "Cannot remove an item from the stack, because the stack is empty" << endl;
		return -1;																				// Must return something here although it is irrelevant
	}
}