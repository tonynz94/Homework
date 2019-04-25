#pragma once
#include "Marcket.h"

class Buyer
{
private :
	int m_Money;	//»ç¿ëÀÚ µ·
public:
	void BuyDrink(Marcket* seller);
	void SelectDrink(Marcket* seller);
};

