
#include<iostream>
using namespace std;

template<typename T>
class Stack
{
	T* stack;
	int top = -1;
	int capacity;

	void resize()
	{
		T* ndstack = new T[capacity * 2];
		for (int i = 0; i < capacity; i++)
		{
			ndstack[i] = stack[i];
		}
		delete[] stack;
		stack = ndstack;
		capacity *= 2;
	}

public:

	Stack(int cap)
	{
		if (cap > 0)
		{
			stack = new T[cap];
			capacity = cap;
		}
		else
		{
			cout << "Size should be greater than 0";
			exit(0);
		}
	}


	~Stack()
	{
		delete[] stack;
	}


	bool isEmpty()
	{
		return top == -1;
	}


	bool isFull()
	{
		return top == capacity - 1;
	}


	void push(T eln)
	{
		if (isFull())
		{
			resize();
		}
		stack[++top] = eln;
	}


	T Top()
	{
		if (!isEmpty())
		{
			return stack[top];
		}
		else
		{
			exit(0);
		}
	}


	T pop()
	{
		if (!isEmpty())
		{
			return stack[top--];
		}
		else
		{
			exit(0);
		}
	}

	int getCapacity()
	{
		return capacity;
	}

	int getTop()
	{
		return top;
	}
};

int main()
{

	return 0;
}
main.cpp
Displaying main.cpp.