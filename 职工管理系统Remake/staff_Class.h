#pragma once
#include<string>
#include<cstring>

/****************************************************����ְ����***************************************************************/
class abstractStaff
{
public:
	int m_staff_id;			//ְ�����
	char m_staff_name[20];	//ְ������
	char m_staff_pos[20];	//ְ����λ
	char m_staff_duty[60];	//ְ��ְ��

public:
	void setStaffId(int id);				//����ְ�����
	void setStaffName(const char* name);	//����ְ������
	void dispStaff();						//��ʾְ����Ϣ
};

/****************************************************��ͨԱ����***************************************************************/
class staff :public abstractStaff
{
public:
	staff();		//���캯��
};

/****************************************************��  ��  ��***************************************************************/
class manager :public abstractStaff
{
public:
	manager();		//���캯��
};

/****************************************************��  ��  ��***************************************************************/
class boss :public abstractStaff
{
public:
	boss();		//���캯��
};
