#include <iostream>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

int main()
{
	Stack<int> stackObj(3);

	stackObj.push(5);
	stackObj.push(3);
	stackObj.push(8);
	stackObj.push(8);
	cout << stackObj.pop() << endl;
	cout << stackObj.pop() << endl;
	cout << stackObj.pop() << endl;
	cout << stackObj.pop() << endl;

	cin.get();
	return 0;
}