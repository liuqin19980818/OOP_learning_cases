#include<iostream>
#include"workManiger.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;
int main()
{
	/*Worker *woerk = new Employee(1, "张三", 1);
	woerk->showINfo();
	delete woerk;
	woerk = new Manager(2, "李四", 2);
	woerk->showINfo();
	delete woerk;
	woerk = new Boss(3, "王五", 3);
	woerk->showINfo();
	delete woerk;
	system("pause");
	return 0;*/
	//实例化管理者的对象
	workManiger m;//是在栈中实例化的
								//小类如此,如果是大类的话就需要堆中实例化,使用new和delect
	int choice = 0;
	while (true)
	{
		m.Showmeun();
		cout << "请输入你的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			m.exitSystem();
			break;
		case 1://添加职工
			m.Add_num();
			break;
		case 2://显示职工
			m.show_emp();
			break;
		case 3://删除职工
			m.del_emp();
			break;
		case 4://修改职工
			m.changeemp();
			break;
		case 5://查找职工
			m.find_emp();
			break;
		case 6://排序职工
			m.sort_emp();
			break;
		case 7://清空职工
			m.clean_file();
			break;

		default:
			cout << "输入有误，请重新输入！" << endl;
			system("pause");
			system("cls");
			
			break;
		}

	}
	m.Showmeun();
	system("pause");
	return 0;
}


