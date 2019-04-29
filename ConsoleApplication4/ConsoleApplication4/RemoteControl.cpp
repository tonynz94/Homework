#include "pch.h"
#include "RemoteControl.h"
#include "AirConditioner.h"


void RemoteControl::AirOnOff(AirConditioner& airCon)
{
	bool power = airCon.getPowerOnOff();
	airCon.powerOnOff(power);
}

void RemoteControl::RemoteTempUp(AirConditioner& airCon)	//1 온도증가
{
	if (!(airCon.getPowerOnOff()))
	{
		cout << "전원이 꺼저있습니다." << endl;
		return;
	}
	if (m_Battery <= 0)
	{
		cout << "리모컨 배터리가 없습니다." << endl;
		return;
	}
	m_Battery -= 10;
	airCon.tempUp();
}

void RemoteControl::RemoteTempDown(AirConditioner& airCon)		//1 온도감소
{
	if (!(airCon.getPowerOnOff()))
	{
		cout << "전원이 꺼저있습니다." << endl;
		return;
	}
	if (m_Battery <= 0)
	{
		cout << "리모컨 배터리가 없습니다." << endl;
		return;
	}
	m_Battery -= 10;
	airCon.tempDown();
}

void RemoteControl::NatrualWind(AirConditioner& airCon)		//자연풍
{
	airCon.SetWindTypes(AirConditioner::type::NATRUALWIND);
}

void RemoteControl::AirCleaner(AirConditioner& airCon)		//공기청정기
{
	airCon.SetWindTypes(AirConditioner::type::AIRCLEANER);
}

void RemoteControl::AirCon(AirConditioner& airCon)		//에어컨
{
	airCon.SetWindTypes(AirConditioner::type::AIRCON);
}

void RemoteControl::BuyBattery()
{
	m_Battery = 100;
	cout << "건전지 교환완료" << endl;
}

RemoteControl::RemoteControl(int bat):m_Battery(bat){}


RemoteControl::~RemoteControl(){}
