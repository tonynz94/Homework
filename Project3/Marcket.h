#pragma once
class Marcket
{
private:
	int m_InputMoney = 0;
	int drinkTaste[5] = {1000,1100,1200,1300,1400};
public:
	void inputMoneys(int _money);	//����ڿ��� ���Ḧ �Ǵ�.
	int GetDrink();
	void GetTotalMoney() const;		//�մ��� ���� �ݾ� ��������
};

