//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string����ȵ�(cout)��ʱ����Ҫʹ��
//using namespace std;
//
///*ģ���STL����ң����Ϣ����C++������P133*/
///*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
///*��ģ��*/
//
//class Person1//��ͨ��
//{
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1\n";
//	}
//	/*��ͨ���еĳ�Ա�����ڱ�����֮ǰ�Ϳ��Դ�������ģ���еĳ�Ա�����ڱ����õ�ʱ��ſ��Դ���*/
//};
//
//class Person2//��ͨ��
//{
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2\n";
//	}
//	/*��ͨ���еĳ�Ա�����ڱ�����֮ǰ�Ϳ��Դ�������ģ���еĳ�Ա�����ڱ����õ�ʱ��ſ��Դ���*/
//};
//
//template<class T>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//class Person//��ģ��
//{
//public:
//	T obj;//��������Ϊ��������T�������Աobj
//	/*��ͨ���еĳ�Ա�����ڴ������п�ʼʱ�Ϳ��Դ�������ģ���еĳ�Ա�����ڱ����õ�ʱ��ſ��Դ���*/
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//	/*��ʵ�ϣ������obj������Person1���͵Ļ���Person2���͵ģ�δ֪��
//	���ԣ�showPerson1(),showPerson2()�л���һ������Ȼ��֪������һ�������ܱ�����
//	������д�����µ�test1()֮ǰ��Fn F7����Ȼ����ͨ���ˣ�
//	��ʵ�����ô����ʱ���֣������showPerson1(),showPerson2()��û�б����������Ϊ�������ơ�
//	��˵������ģ���еĳ�Ա�����ڱ�����֮ǰ���ǲ��ܱ�������
//	
//	��д�����µ�test1()֮����Է��֣�Fn F7���룬
//	����error C2039: "showPerson2": ���� "Person1" �ĳ�Ա
//	��˵������ģ���еĳ�Ա�����ڱ����õ�ʱ��ſ��Դ���*/
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
//	Person<Person1>p1;
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p1;����д�Ǵ����*/
//	p1.func1();
//	p1.func2();
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
//	/*cout << "test2();\n";
//	test2();*/
//
//	system("pause");
//	return 0;
//}