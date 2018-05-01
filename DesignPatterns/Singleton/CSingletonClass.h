#pragma once
class CSingletonClass
{
private:
	// 私有化单例类的构造函数
	CSingletonClass() {}
	// 私有化单例类的拷贝构造函数
	CSingletonClass(const CSingletonClass &) {}
	// 私有化单例类的拷贝运算符重载
	CSingletonClass operator = (const CSingletonClass &) {}
	// 创建私有化的单例类静态实例
	static CSingletonClass *m_instance;

	// 测试用单例类私有成员变量
	int m_numA, m_numB;
public:
	~CSingletonClass();
	// 外部获取单例类的静态实例
	static CSingletonClass *getInstance();
	
	// 测试用单例类成员函数
	void setNumA(int number) { m_numA = number; }
	void setNumB(int number) { m_numB = number; }
	int getNumA() { return m_numA; }
	int getNumB() { return m_numB; }
};

