#include "stdafx.h"
#include "CSingletonClass.h"


CSingletonClass::~CSingletonClass()
{
}

CSingletonClass *CSingletonClass::m_instance = nullptr;
// �ⲿ��ȡ������ľ�̬ʵ��
CSingletonClass *CSingletonClass::getInstance()
{
	if (m_instance == nullptr)
		m_instance = new CSingletonClass();
	return m_instance;
}
