#include "pch.h"
#include "AirConditioner.h"
#include "RemoteControl.h"

bool AirConditioner::getPowerOnOff()
{
	return m_Power;
}

bool AirConditioner::powerOnOff(bool OnOff)	//������ ON/OFF
{
	OnOff = !OnOff;
	if (OnOff) {
		cout << "ON" << endl;
		m_Power = true;
	}
	else {
		cout << "OFF" << endl;
		m_Power = false;
	}
	return m_Power;
}
int AirConditioner::getTemp()		//���� �µ��� ��ȯ
{
	if (!(m_Power)) {
		cout << "������ ���ּ���" << endl;
		return 0;
	}
	return m_Temp;
}
void AirConditioner::tempUp()		//1 �µ�����
{
	if (!(m_Power)) {
		cout << "������ ���ּ���" << endl;
		return;
	}

	int hope = m_HopeTemp + 1;
	if (hope > 31)
	{
		cout << "31�� ���� �����մϴ�." << endl;
		return;
	}
	m_HopeTemp = hope;
	cout << m_HopeTemp << "�� �����Ϸ�" << endl;
}
void AirConditioner::tempDown()	//1 �µ�����
{
	if (!(m_Power)) {
		cout << "������ ���ּ���" << endl;
		return;
	}

	int hope = m_HopeTemp - 1;
	if (hope < 16)
	{
		cout << "17�� ���� �����մϴ�." << endl;
		return;
	}

	m_HopeTemp = hope;
	cout << m_HopeTemp << "�� �����Ϸ�" << endl;
}

void AirConditioner::SetWindTypes(type wind)
{
	windType = wind;
}

const char* AirConditioner::GetwindTypes()
{
	const char* type;
	switch (windType)
	{
	case type::AIRCON:
		type = "������";
		break;
	case type::NATRUALWIND:
		type = "�ڿ�ǳ";
		break;
	case type::AIRCLEANER:
		type = "����û����";
		break;
	default:
		type = "";
		break;
	}
	return type;
}

void AirConditioner::GetAllInfo()
{
	if (!(m_Power)) {
		cout << "�������� : OFF" << endl;
		return;
	}
	cout << "����µ� : " <<getTemp() << endl;
	cout << "����µ� : " <<m_HopeTemp << endl;
	cout << "�ٶ�	  : " <<GetwindTypes() << endl;
}

AirConditioner::AirConditioner():m_HopeTemp(22),m_Power(false),windType(type::AIRCON){}

AirConditioner::~AirConditioner()
{
}
