#pragma once
#include "AirConditioner.h"

class RemoteControl
{
private:
	int m_HopeTemp;	//희망 온도
	int m_Battery;	//배터리

public:
	void AirOnOff(AirConditioner& airCon);
	void RemoteTempUp(AirConditioner& airCon);		//1 온도증가
	void RemoteTempDown(AirConditioner& airCon);		//1 온도감소
	
	void NatrualWind(AirConditioner& airCon);			//자연풍
	void AirCleaner(AirConditioner& airCon);
	void AirCon(AirConditioner& airCon);
	
	void BuyBattery();

	RemoteControl(int);
	~RemoteControl();
};

