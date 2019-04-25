#include "pch.h"
#include "Buyer.h"

void Buyer::BuyDrink(Marcket* seller)
{
	int _money;
	cout << "돈을 넣어주세요 : ";
	cin >> _money;

	if ((_money % 100)) {
		cout << "100원 단위로 넣어주세요." << endl;
		return;
	}

	seller->inputMoneys(_money);//고른 음료수와 낸 돈;
	seller->GetTotalMoney();
}

void Buyer::SelectDrink(Marcket* seller)
{
	int noneMoney;
	if (noneMoney = seller->GetDrink()) {
		int five = noneMoney / 500;
		cout << "거스름돈 : " << endl;
		cout << "500원 : " << five << "개" << endl;
		cout << "100원 : " << (noneMoney - (five * 500)) / 100 << "개" << endl;
	}
	else {
		cout << "돈을 더 넣어주세요" << endl;
	}
}
