#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
class Boss :public Worker//也是集成的意思
												 //class derived-class: access-specifier base-class
{
public:
	Boss(int ID, string name, int DID);
	virtual void showINfo();
	virtual string getDepname();
};
// 什么是动态绑定?什么是虚函数?
