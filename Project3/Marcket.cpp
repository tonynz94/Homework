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
	cout << "1.���	    : 1000��" << endl;
	cout << "2.�ݶ�	    : 1100��" << endl;
	cout << "3.ȯŸ	    : 1200��" << endl;
	cout << "4.����ƾ�� : 1300��" << endl;
	cout << "5.���̴�   : 1400��" << endl;
	cin >> drinkNum;
	if (drinkTaste[drinkNum] > m_InputMoney)
	{
		cout << "���� �����մϴ�" << endl;
		return 0;
		
	}else
	{
		const char *name = nullptr;
		switch (drinkNum)
		{
			case 1:
				name = "���";
				break;
			case 2:	
				name = "�ݶ�";
				break;
			case 3:	
				name = "ȯŸ";
				break;
			case 4:	
				name = "����ƾ��";
				break;
			case 5:
				name = "���̴�";
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
	cout << "�� ���� �ݾ� : " << m_InputMoney << endl;
	
}
