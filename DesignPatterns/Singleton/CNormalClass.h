#pragma once
class CNormalClass
{
private:
	// 测试用普通类私有化成员变量
	int m_numA, m_numB;
public:
	CNormalClass();
	~CNormalClass();
	// 测试用普通类成员函数
	void setNumA(int number) { m_numA = number; }
	void setNumB(int number) { m_numB = number; }
	int getNumA() { return m_numA; }
	int getNumB() { return m_numB; }
};

