#include"wm.h"
#include<fstream>
#include<iostream>

//���캯��
workManage::workManage()
{
	//��ʼ��ϵͳ
	std::ifstream info_file("sys_info.txt");
	
	//����ļ��Ƿ���ڣ������ж�ϵͳ�Ƿ��������
	if (info_file.is_open())
	{
		std::cout << "|--�����ļ����֣�---------------" << std::endl;
		//�ļ����ڣ�ֱ�Ӷ�����
		int num;
		if (info_file >> num)
		{
			//��ȡ�ɹ���ֱ�Ӹ�ֵ
			staffNum = num;
			std::cout << "|--�����ļ���ȡ�ɹ���-------------------" << std::endl;
			//std::cout << staffNum << std::endl;
		}
		else
		{
			//��ȡʧ�ܣ���ʱ��չ��
			std::cout << "|--�����ļ���ȡʧ�ܣ�-------------------" << std::endl;
		}

		info_file.close();
	}
	else
	{
		//�������ļ���˵����������
		std::cout << "|--δ���������ļ���ϵͳ��ʼ����----" << std::endl;

		//�����µ������ļ�
		std::ofstream info_File("sys_info.txt");
		std::ofstream staff_file("staff_info.txt");

		//�������ļ���д����
		std::ofstream ofs;
		ofs.open("sys_info.txt", std::ios::out);
		ofs << 0 << std::endl;
		ofs.close();

		std::cout << "|--ϵͳ��ʼ���ɹ���----------------------" << std::endl;
	}
}

//��������
workManage::~workManage()
{
	//��ʱû�뵽ʲô��Ҫд�����������Ķ���
}

//�˳��������
bool workManage::wm_exit()
{
	system("cls");
	std::cout << "|--����ϵͳ�˳��У�----------------------" << std::endl;

	return 0;
}

//����ְ����Ϣ
void workManage::wm_addStaff()
{

}

//��ʾְ����Ϣ
void workManage::wm_showStaff()
{

}

//ɾ����ְְ��
void workManage::wm_delStaff()
{

}

//�޸�ְ����Ϣ
void workManage::wm_alterStaff()
{

}

//����ְ����Ϣ
void workManage::wm_findStaff()
{

}

//����ְ����Ϣ
void workManage::wm_sortStaff()
{

}

//��������ĵ�
void workManage::wm_purgeStaff()
{

}