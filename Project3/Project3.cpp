// Project3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "Buyer.h"
#include "Marcket.h"
#include <conio.h>

int main()
{
	int ch;
	Marcket machine;
	Buyer person;
	
	do {
		cout << "1. 동전 넣기" << endl;
		cout << "2. 음료 뽑기" << endl;
		cout << "3. 종료" << endl;

		ch = _getch();
		switch (ch-48)
		{
		case 1:
			person.BuyDrink(&machine);
			break;
		case 2:
			person.SelectDrink(&machine);
			break;
		case 3:
			cout << "Bye" << endl;
			break;
		default:
			cout << "다시 입력" << endl;
			break;
		}
		cout << endl;
	} while (ch-48 != 3);
	
}
