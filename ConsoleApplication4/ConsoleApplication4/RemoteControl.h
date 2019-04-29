#pragma once
#include "AirConditioner.h"

class RemoteControl
{
private:
	int m_HopeTemp;	//��� �µ�
	int m_Battery;	//���͸�

public:
	void AirOnOff(AirConditioner& airCon);
	void RemoteTempUp(AirConditioner& airCon);		//1 �µ�����
	void RemoteTempDown(AirConditioner& airCon);		//1 �µ�����
	
	void NatrualWind(AirConditioner& airCon);			//�ڿ�ǳ
	void AirCleaner(AirConditioner& airCon);
	void AirCon(AirConditioner& airCon);
	
	void BuyBattery();

	RemoteControl(int);
	~RemoteControl();
};

