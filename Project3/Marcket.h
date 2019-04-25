#pragma once
class Marcket
{
private:
	int m_InputMoney = 0;
	int drinkTaste[5] = {1000,1100,1200,1300,1400};
public:
	void inputMoneys(int _money);	//사용자에게 음료를 판다.
	int GetDrink();
	void GetTotalMoney() const;		//손님이 넣은 금액 가져오기
};

