#pragma once
class CNormalClass
{
private:
	// ��������ͨ��˽�л���Ա����
	int m_numA, m_numB;
public:
	CNormalClass();
	~CNormalClass();
	// ��������ͨ���Ա����
	void setNumA(int number) { m_numA = number; }
	void setNumB(int number) { m_numB = number; }
	int getNumA() { return m_numA; }
	int getNumB() { return m_numB; }
};

