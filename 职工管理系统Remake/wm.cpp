#include"wm.h"
#include<fstream>
#include<iostream>

//构造函数
workManage::workManage()
{
	//初始化系统
	std::ifstream info_file("sys_info.txt");
	
	//检查文件是否存在，用以判断系统是否初次运行
	if (info_file.is_open())
	{
		std::cout << "|--配置文件发现！---------------" << std::endl;
		//文件存在，直接读人数
		int num;
		if (info_file >> num)
		{
			//读取成功，直接赋值
			staffNum = num;
			std::cout << "|--配置文件读取成功！-------------------" << std::endl;
			//std::cout << staffNum << std::endl;
		}
		else
		{
			//读取失败，暂时不展开
			std::cout << "|--配置文件读取失败！-------------------" << std::endl;
		}

		info_file.close();
	}
	else
	{
		//不存在文件，说明初次运行
		std::cout << "|--未发现配置文件，系统初始化！----" << std::endl;

		//创建新的两个文件
		std::ofstream info_File("sys_info.txt");
		std::ofstream staff_file("staff_info.txt");

		//向属性文件中写人数
		std::ofstream ofs;
		ofs.open("sys_info.txt", std::ios::out);
		ofs << 0 << std::endl;
		ofs.close();

		std::cout << "|--系统初始化成功！----------------------" << std::endl;
	}
}

//析构函数
workManage::~workManage()
{
	//暂时没想到什么需要写在析构函数的东西
}

//退出管理程序
bool workManage::wm_exit()
{
	system("cls");
	std::cout << "|--管理系统退出中！----------------------" << std::endl;

	return 0;
}

//增加职工信息
void workManage::wm_addStaff()
{

}

//显示职工信息
void workManage::wm_showStaff()
{

}

//删除离职职工
void workManage::wm_delStaff()
{

}

//修改职工信息
void workManage::wm_alterStaff()
{

}

//查找职工信息
void workManage::wm_findStaff()
{

}

//排序职工信息
void workManage::wm_sortStaff()
{

}

//清除所有文档
void workManage::wm_purgeStaff()
{

}