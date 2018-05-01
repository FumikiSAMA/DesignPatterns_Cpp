#pragma once
class CSingletonClass
{
private:
	// ˽�л�������Ĺ��캯��
	CSingletonClass() {}
	// ˽�л�������Ŀ������캯��
	CSingletonClass(const CSingletonClass &) {}
	// ˽�л�������Ŀ������������
	CSingletonClass operator = (const CSingletonClass &) {}
	// ����˽�л��ĵ����ྲ̬ʵ��
	static CSingletonClass *m_instance;

	// �����õ�����˽�г�Ա����
	int m_numA, m_numB;
public:
	~CSingletonClass();
	// �ⲿ��ȡ������ľ�̬ʵ��
	static CSingletonClass *getInstance();
	
	// �����õ������Ա����
	void setNumA(int number) { m_numA = number; }
	void setNumB(int number) { m_numB = number; }
	int getNumA() { return m_numA; }
	int getNumB() { return m_numB; }
};

