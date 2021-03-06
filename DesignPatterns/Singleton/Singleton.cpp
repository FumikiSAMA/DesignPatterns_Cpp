// Singleton.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	CNormalClass *normalObj = new CNormalClass();
	normalObj->setNumA(1);
	normalObj->setNumB(2);
	cout << "At normal class after call set function: NumberA is " << normalObj->getNumA() << " and NumberB is: " << normalObj->getNumB() << endl;
	normalObj = nullptr;
	delete normalObj;
	normalObj = new CNormalClass();
	cout << "At normal class doesn't call set function: NumberA is " << normalObj->getNumA() << " and NumberB is: " << normalObj->getNumB() << endl;
	normalObj = nullptr;
	delete normalObj;

	CSingletonClass::getInstance()->setNumA(3);
	CSingletonClass::getInstance()->setNumB(4);
	cout << "At singleton class after call set function: NumberA is " << CSingletonClass::getInstance()->getNumA() << " and NumberB is: "
		<< CSingletonClass::getInstance()->getNumB() << endl;

	system("pause");
    return 0;
}

