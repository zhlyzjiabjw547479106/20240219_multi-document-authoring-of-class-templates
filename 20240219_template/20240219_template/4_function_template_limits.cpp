//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
///*ģ���STL����ң����Ϣ����C++������P133*/
///*��ͨ�������Է�����ʽ����ת�����Զ�����ת����
//����ģ�壺�������ʱ���õ����Զ������Ƶ������ܷ�����ʽ����ת����
//������õ�����ʾָ�����ͣ����Է�����ʽ����ת��*/
///*��ͨ�����뺯��ģ��ĵ��ù���
//1.�����������ص�ʱ���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б������ʾָ��������ǿ�Ƶ��ú���ģ��
//3.����ģ����Է�����������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//ʵ�ʿ����У�����к���ģ�壬��þͲ�Ҫ�ṩ��ͨ�����ˣ������������Ķ�����*/
///*ģ�岻�����ܵģ����磺error C2676: 
//TΪ�����ʱ���޷����и�ֵ������TΪ�Զ�������ʱ���޷����бȽϴ�С����
//���C++�ṩ��ģ������أ�����Ϊ�ض��������ṩ���廯��ģ��*/
///*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
//
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//};
//
//template<typename T>//����һ������ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = myCompare(a, b);
//
//	if (ret)
//	{
//		cout << "a = b\n\n";
//	}
//	else
//	{
//		cout << "a �� b\n\n";
//	}
//
//}
//
//void test2()
//{
//	Person p1("��Сң", 18);
//	Person p2("��Сң", 18);
//
//	bool ret = myCompare(p1, p2);
//
//	if (ret)
//	{
//		cout << "a = b\n\n";
//	}
//	else
//	{
//		cout << "a �� b\n\n";
//	}
//	/*�����ơ�==��:��T����������������Ԥ����������ɽ��յ����͵�ת��
//	����������������������==��
//	�ھ��廯Person��ĺ���ģ��template<> bool myCompare(Person& p1, Person& p2)�����廯�ĺ���ģ��ᱻ���ȵ���*/
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