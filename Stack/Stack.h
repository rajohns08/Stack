#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
private:
	T *stackArray;												// Variable for array
	int top;													// Keep up with current last index
	int stackSize;												// The size of the stack (array)

public:
	Stack(int size = 10);										// Constructor with default value of 10 set for size. Allow the user to pass a size with the object creation.
	void push(T value);											// Push function used to push new elements to end of array
	T pop();													// Pop function used to return the value at top of stack, and remove it by decrementing top

	bool isFull() const												
		{ return top < stackSize-1 ? false : true; }			// If top is not the last index it is not full, so return false

	bool isEmpty() const
		{ return top > -1 ? false : true; }						// If top is greater than -1 it is not empty, so return false

	~Stack()
		{ delete [] stackArray; }								// Clear memory allocated for the array in the constructor
};

#endif 