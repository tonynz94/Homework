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
	int m_Temp;	//������ �µ�
	int m_HopeTemp;	//����µ�
	bool m_Power;	//��������
	type windType;

public:
	bool powerOnOff(bool);	//������ ON/OFF
	bool getPowerOnOff();
	int getTemp();		//���� �µ��� ��ȯ
	void tempUp();		//1 �µ�����
	void tempDown();	//1 �µ�����
	void SetWindTypes(type wind);
	const char* GetwindTypes();
	void GetAllInfo();

	AirConditioner();
	~AirConditioner();
};

