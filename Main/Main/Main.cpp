// Main.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "MyStack.h"
#include "MyStack.cpp"

int main()
{
	MyStack<int> * myStack = new MyStack<int>();
	myStack->Push(10);
	myStack->Push(20);
	myStack->Push(30);
	myStack->Push(40);
	
	cout << "생성 완료" << endl;
	cout << myStack->Pop() << endl;
	cout << myStack->Pop() << endl;
	cout << myStack->Pop() << endl;
	cout << myStack->Pop() << endl;
	cout << "삭제 완료" << endl;

	if (myStack->IsEmpty())
	{
		cout << "비어 있습니다." << endl;
	}
	else {
		cout << "안에 노드가 있습니다." << endl;
	}

	myStack->Push(100);
	myStack->Push(200);
	myStack->Push(300);
	myStack->Push(400);

	cout << "Top : " << myStack->GetTop() << endl;

	cout << myStack->Pop() << endl;
	cout << myStack->Pop() << endl;

	if (myStack->IsEmpty()) 
	{
		cout << "비어 있습니다." << endl;
	}
	else {
		cout << "안에 노드가 있습니다." << endl;
	}

	cout << myStack->Pop() << endl;

}