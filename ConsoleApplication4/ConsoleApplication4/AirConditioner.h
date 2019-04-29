#pragma once
class AirConditioner
{
public:
	enum class type
	{
		AIRCON,
		NATRUALWIND,
		AIRCLEANER,
	};

private:
	int m_Temp;	//에어컨 온도
	int m_HopeTemp;	//희망온도
	bool m_Power;	//전원상태
	type windType;

public:
	bool powerOnOff(bool);	//전원을 ON/OFF
	bool getPowerOnOff();
	int getTemp();		//현재 온도를 반환
	void tempUp();		//1 온도증가
	void tempDown();	//1 온도감소
	void SetWindTypes(type wind);
	const char* GetwindTypes();
	void GetAllInfo();

	AirConditioner();
	~AirConditioner();
};

