#include "pch.h"
#include "Buyer.h"

void Buyer::BuyDrink(Marcket* seller)
{
	int _money;
	cout << "���� �־��ּ��� : ";
	cin >> _money;

	if ((_money % 100)) {
		cout << "100�� ������ �־��ּ���." << endl;
		return;
	}

	seller->inputMoneys(_money);//�� ������� �� ��;
	seller->GetTotalMoney();
}

void Buyer::SelectDrink(Marcket* seller)
{
	int noneMoney;
	if (noneMoney = seller->GetDrink()) {
		int five = noneMoney / 500;
		cout << "�Ž����� : " << endl;
		cout << "500�� : " << five << "��" << endl;
		cout << "100�� : " << (noneMoney - (five * 500)) / 100 << "��" << endl;
	}
	else {
		cout << "���� �� �־��ּ���" << endl;
	}
}
