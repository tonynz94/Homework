#pragma once

template<typename T>
class MyStack
{
private:
	class Node {
	public:
		T Data;
		Node *Next = nullptr;
		Node(T _Data) :Data(_Data) {}
	};
	Node *TopNode;
	Node *FirstNode;

public:
	T GetTop();	
	T Pop();
	void Push(T value);
	bool IsEmpty();

public:
	MyStack<T>();
	~MyStack<T>();
};

