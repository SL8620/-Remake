#include<iostream>
#include"staff_Class.h"

/****************************************************抽象职工类***************************************************************/
//设置员工编号
void abstractStaff::setStaffId(int id)
{
	m_staff_id = id;
}

//设置员工姓名
void abstractStaff::setStaffName(const char* name)
{
	strcpy_s(m_staff_name, name);
}

//显示职工信息
void abstractStaff::dispStaff()
{
	std::cout << "|-职工编号：" << m_staff_id << std::endl;
	std::cout << "|-职工姓名：" << m_staff_name << std::endl;
	std::cout << "|-职工岗位：" << m_staff_pos << std::endl;
	std::cout << "|-职工职责：" << m_staff_duty << std::endl;
	std::cout << "|------------------------------------------------------------" << std::endl;
}

/****************************************************普通职工类***************************************************************/
//普通员工构造函数
staff::staff()
{
	strcpy_s(m_staff_duty, "完成经理交给的任务");
	strcpy_s(m_staff_pos, "普通员工");
}

/****************************************************经  理  类***************************************************************/
//经理构造函数
manager::manager()
{
	strcpy_s(m_staff_duty, "完成老板交给的任务，并下发任务给员工");
	strcpy_s(m_staff_pos, "经理");
}

/****************************************************老  板  类***************************************************************/
boss::boss()
{
	strcpy_s(m_staff_duty, "管理公司所有事务");
	strcpy_s(m_staff_pos, "老板");
}