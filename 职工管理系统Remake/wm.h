#include"staff_Class.h"

class workManage
{
public:
	//������

	bool wm_exit();					//�˳��������,����0ʱ�˳�ϵͳ
	void wm_addStaff();				//����ְ����Ϣ
	void wm_showStaff();			//��ʾְ����Ϣ
	void wm_delStaff();				//ɾ����ְְ��
	void wm_alterStaff();			//�޸�ְ����Ϣ
	void wm_findStaff();			//����ְ����Ϣ
	void wm_sortStaff();			//����ְ����Ϣ
	void wm_purgeStaff();			//��������ĵ�

public:
	workManage();					//���캯��
	~workManage();					//��������

private:
	int staffNum;					//ְ����Ŀ
	abstractStaff STAFF[1024];		//ְ������
};

