#include<iostream>
#include"staff_Class.h"

/****************************************************����ְ����***************************************************************/
//����Ա�����
void abstractStaff::setStaffId(int id)
{
	m_staff_id = id;
}

//����Ա������
void abstractStaff::setStaffName(const char* name)
{
	strcpy_s(m_staff_name, name);
}

//��ʾְ����Ϣ
void abstractStaff::dispStaff()
{
	std::cout << "|-ְ����ţ�" << m_staff_id << std::endl;
	std::cout << "|-ְ��������" << m_staff_name << std::endl;
	std::cout << "|-ְ����λ��" << m_staff_pos << std::endl;
	std::cout << "|-ְ��ְ��" << m_staff_duty << std::endl;
	std::cout << "|------------------------------------------------------------" << std::endl;
}

/****************************************************��ְͨ����***************************************************************/
//��ͨԱ�����캯��
staff::staff()
{
	strcpy_s(m_staff_duty, "��ɾ�����������");
	strcpy_s(m_staff_pos, "��ͨԱ��");
}

/****************************************************��  ��  ��***************************************************************/
//�����캯��
manager::manager()
{
	strcpy_s(m_staff_duty, "����ϰ彻�������񣬲��·������Ա��");
	strcpy_s(m_staff_pos, "����");
}

/****************************************************��  ��  ��***************************************************************/
boss::boss()
{
	strcpy_s(m_staff_duty, "����˾��������");
	strcpy_s(m_staff_pos, "�ϰ�");
}