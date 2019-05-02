#include "pch.h"
#include "MyStack.h"

template<typename T>
T MyStack<T>::GetTop()
{
	if (TopNode == nullptr)
	{
		assert(false && "노드가 하나도 없어요");
	}

	return TopNode->Data;
}

template<typename T>
T MyStack<T>::Pop()
{
	Node *P = FirstNode;

	if (P == nullptr)
	{	
		return -1;
	}

	if (P->Next == nullptr)	//값이 하나밖에 없을 때
	{
		cout << P->Data << endl;
		
		FirstNode = nullptr;
		TopNode = nullptr;
		int ReturnData = P->Data;
		delete P;
		return ReturnData;
	}

	while (P->Next->Next != nullptr)
	{
		P = P->Next;
	}
	TopNode = P;
	int ReturnData =  P->Next->Data;
	delete P->Next;
	P->Next = nullptr;

	return ReturnData;
	
}

template<typename T>
void MyStack<T>::Push(T value)
{
	Node* NewNode = new Node(value);
	Node *P = TopNode;
	
	if (P == nullptr)	//아직 값이 하나도 없다면 실행된다.
	{
		TopNode = NewNode;
		FirstNode = NewNode;
	}

	else
	{
		P->Next = NewNode;
		TopNode = NewNode;
	}
}

template<typename T>
bool MyStack<T>::IsEmpty()
{
	Node *P = TopNode;
	if (P == nullptr) 
	{
		return true;
	}
	else
	{
		return false;
	}
}


template<typename T>
MyStack<T>::MyStack():TopNode(nullptr)
{

}

template<typename T>
MyStack<T>::~MyStack()
{

}
