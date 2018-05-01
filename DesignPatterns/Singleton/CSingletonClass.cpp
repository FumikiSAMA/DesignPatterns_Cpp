#include "stdafx.h"
#include "CSingletonClass.h"


CSingletonClass::~CSingletonClass()
{
}

CSingletonClass *CSingletonClass::m_instance = nullptr;
// 外部获取单例类的静态实例
CSingletonClass *CSingletonClass::getInstance()
{
	if (m_instance == nullptr)
		m_instance = new CSingletonClass();
	return m_instance;
}
