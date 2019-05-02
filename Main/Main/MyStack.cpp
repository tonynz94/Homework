#include "pch.h"
#include "MyStack.h"

template<typename T>
T MyStack<T>::GetTop()
{
	if (TopNode == nullptr)
	{
		assert(false && "��尡 �ϳ��� �����");
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

	if (P->Next == nullptr)	//���� �ϳ��ۿ� ���� ��
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
	
	if (P == nullptr)	//���� ���� �ϳ��� ���ٸ� ����ȴ�.
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
