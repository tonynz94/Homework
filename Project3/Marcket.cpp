#include "pch.h"
#include "Marcket.h"


void Marcket::inputMoneys(int _money)
{
	m_InputMoney += _money;
}

int Marcket::GetDrink()
{
	int drinkNum;
	int drinkPrice;
	
	cout << endl;
	cout << "1.펩시	    : 1000원" << endl;
	cout << "2.콜라	    : 1100원" << endl;
	cout << "3.환타	    : 1200원" << endl;
	cout << "4.마운틴듀 : 1300원" << endl;
	cout << "5.사이다   : 1400원" << endl;
	cin >> drinkNum;
	if (drinkTaste[drinkNum] > m_InputMoney)
	{
		cout << "돈이 부족합니다" << endl;
		return 0;
		
	}else
	{
		const char *name = nullptr;
		switch (drinkNum)
		{
			case 1:
				name = "펩시";
				break;
			case 2:	
				name = "콜라";
				break;
			case 3:	
				name = "환타";
				break;
			case 4:	
				name = "마운틴듀";
				break;
			case 5:
				name = "사이다";
				break;
			default:
				break;
		}
		cout << name << endl;
		return m_InputMoney - drinkTaste[drinkNum-1];
	}
}

void Marcket::GetTotalMoney() const
{
	cout << "총 넣은 금액 : " << m_InputMoney << endl;
	
}
