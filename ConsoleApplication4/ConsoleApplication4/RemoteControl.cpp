#include "pch.h"
#include "RemoteControl.h"
#include "AirConditioner.h"


void RemoteControl::AirOnOff(AirConditioner& airCon)
{
	bool power = airCon.getPowerOnOff();
	airCon.powerOnOff(power);
}

void RemoteControl::RemoteTempUp(AirConditioner& airCon)	//1 �µ�����
{
	if (!(airCon.getPowerOnOff()))
	{
		cout << "������ �����ֽ��ϴ�." << endl;
		return;
	}
	if (m_Battery <= 0)
	{
		cout << "������ ���͸��� �����ϴ�." << endl;
		return;
	}
	m_Battery -= 10;
	airCon.tempUp();
}

void RemoteControl::RemoteTempDown(AirConditioner& airCon)		//1 �µ�����
{
	if (!(airCon.getPowerOnOff()))
	{
		cout << "������ �����ֽ��ϴ�." << endl;
		return;
	}
	if (m_Battery <= 0)
	{
		cout << "������ ���͸��� �����ϴ�." << endl;
		return;
	}
	m_Battery -= 10;
	airCon.tempDown();
}

void RemoteControl::NatrualWind(AirConditioner& airCon)		//�ڿ�ǳ
{
	airCon.SetWindTypes(AirConditioner::type::NATRUALWIND);
}

void RemoteControl::AirCleaner(AirConditioner& airCon)		//����û����
{
	airCon.SetWindTypes(AirConditioner::type::AIRCLEANER);
}

void RemoteControl::AirCon(AirConditioner& airCon)		//������
{
	airCon.SetWindTypes(AirConditioner::type::AIRCON);
}

void RemoteControl::BuyBattery()
{
	m_Battery = 100;
	cout << "������ ��ȯ�Ϸ�" << endl;
}

RemoteControl::RemoteControl(int bat):m_Battery(bat){}


RemoteControl::~RemoteControl(){}
