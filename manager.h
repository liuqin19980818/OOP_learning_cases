#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
class Manager:public Worker//这表示Manager是Worker的派生类
{
public:
	Manager(int ID, string name, int DID);

	virtual void showINfo();

	virtual string getDepname();
	
};

