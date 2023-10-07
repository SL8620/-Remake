#include"staff_Class.h"

class workManage
{
public:
	//管理功能

	bool wm_exit();					//退出管理程序,返回0时退出系统
	void wm_addStaff();				//增加职工信息
	void wm_showStaff();			//显示职工信息
	void wm_delStaff();				//删除离职职工
	void wm_alterStaff();			//修改职工信息
	void wm_findStaff();			//查找职工信息
	void wm_sortStaff();			//排序职工信息
	void wm_purgeStaff();			//清除所有文档

public:
	workManage();					//构造函数
	~workManage();					//析构函数

private:
	int staffNum;					//职工数目
	abstractStaff STAFF[1024];		//职工数组
};

