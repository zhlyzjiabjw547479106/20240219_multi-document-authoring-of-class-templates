//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string���(cout)�ȵȵ�ʱ����Ҫʹ��
//using namespace std;
//
///*ģ���STL����ң����Ϣ����C++������P133*/
///*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
///*��ģ��*/
//
//class PersonGeneral//��ͨ��
//{
//public:
//	string m_Name;
//	int m_Age;
//	PersonGeneral(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPersonGeneral()
//	{
//		cout << "showPersonGeneral:\n";
//		cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//	}
//};
//
//template<class TName, class TAge>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//class Person//��ģ��
//{
//public:
//	TName m_Name;
//	TAge m_Age;
//	Person(TName name, TAge age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "showPerson:\n";
//		cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//	}
//};
//
//template<class TName, class TAge = int>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*ע�⣺����ģ�岻������������Ĭ�ϵ���������*/
//class Person_DefaultDataType//��ģ�壬����Ĭ�ϵ���������
//{
//public:
//	TName m_Name;
//	TAge m_Age;
//	Person_DefaultDataType(TName name, TAge age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson_DefaultDataType()
//	{
//		cout << "Person_DefaultDataType:\n";
//		cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//	}
//};
//
//void test1()
//{
//	Person<string, int>p1("��Сң", 18);
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p1("��Сң", 18);����д�Ǵ����*/
//	p1.showPerson();
//
//}
//
//void test2()
//{
//	Person_DefaultDataType<string>p2("��Сң", 18);
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p2("��Сң", 18);����д�Ǵ����
//	���������Person_DefaultDataType��ģ���ڶ����ʱ�����Ĭ�ϵ��������ͣ�
//	����ģ��Ĳ����б����Ĭ�ϵ��������Ϳ��Բ����ٶ������ٴ�˵��
//	ע�⣺����ģ�岻�ܴ���Ĭ�ϵ���������*/
//	p2.showPerson_DefaultDataType();
//
//}
//
//int main()
//{
//	cout << "test1();\n";
//	test1();
//	cout << "test2();\n";
//	test2();
//
//	system("pause");
//	return 0;
//}