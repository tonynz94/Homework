#include "pch.h"
#include "AirConditioner.h"
#include "RemoteControl.h"

bool AirConditioner::getPowerOnOff()
{
	return m_Power;
}

bool AirConditioner::powerOnOff(bool OnOff)	//전원을 ON/OFF
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
int AirConditioner::getTemp()		//현재 온도를 반환
{
	if (!(m_Power)) {
		cout << "전원을 켜주세요" << endl;
		return 0;
	}
	return m_Temp;
}
void AirConditioner::tempUp()		//1 온도증가
{
	if (!(m_Power)) {
		cout << "전원을 켜주세요" << endl;
		return;
	}

	int hope = m_HopeTemp + 1;
	if (hope > 31)
	{
		cout << "31도 까지 가능합니다." << endl;
		return;
	}
	m_HopeTemp = hope;
	cout << m_HopeTemp << "도 설정완료" << endl;
}
void AirConditioner::tempDown()	//1 온도감소
{
	if (!(m_Power)) {
		cout << "전원을 켜주세요" << endl;
		return;
	}

	int hope = m_HopeTemp - 1;
	if (hope < 16)
	{
		cout << "17도 까지 가능합니다." << endl;
		return;
	}

	m_HopeTemp = hope;
	cout << m_HopeTemp << "도 설정완료" << endl;
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
		type = "에어컨";
		break;
	case type::NATRUALWIND:
		type = "자연풍";
		break;
	case type::AIRCLEANER:
		type = "공기청정기";
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
		cout << "전원상태 : OFF" << endl;
		return;
	}
	cout << "현재온도 : " <<getTemp() << endl;
	cout << "희망온도 : " <<m_HopeTemp << endl;
	cout << "바람	  : " <<GetwindTypes() << endl;
}

AirConditioner::AirConditioner():m_HopeTemp(22),m_Power(false),windType(type::AIRCON){}

AirConditioner::~AirConditioner()
{
}
