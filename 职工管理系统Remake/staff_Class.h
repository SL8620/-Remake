#pragma once
#include<string>
#include<cstring>

/****************************************************抽象职工类***************************************************************/
class abstractStaff
{
public:
	int m_staff_id;			//职工编号
	char m_staff_name[20];	//职工姓名
	char m_staff_pos[20];	//职工岗位
	char m_staff_duty[60];	//职工职责

public:
	void setStaffId(int id);				//设置职工编号
	void setStaffName(const char* name);	//设置职工姓名
	void dispStaff();						//显示职工信息
};

/****************************************************普通员工类***************************************************************/
class staff :public abstractStaff
{
public:
	staff();		//构造函数
};

/****************************************************经  理  类***************************************************************/
class manager :public abstractStaff
{
public:
	manager();		//构造函数
};

/****************************************************老  板  类***************************************************************/
class boss :public abstractStaff
{
public:
	boss();		//构造函数
};
