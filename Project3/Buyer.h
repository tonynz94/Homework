#pragma once
#include "Marcket.h"

class Buyer
{
private :
	int m_Money;	//����� ��
public:
	void BuyDrink(Marcket* seller);
	void SelectDrink(Marcket* seller);
};

