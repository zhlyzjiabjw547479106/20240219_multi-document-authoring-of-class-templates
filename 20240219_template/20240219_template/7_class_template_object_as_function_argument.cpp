//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string���(cout)�ȵȵ�ʱ����Ҫʹ��
//using namespace std;
//
///*ģ���STL����ң����Ϣ����C++������P133*/
///*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
///*��ģ��ʵ���������Ķ��󣬿�����Ϊ�����Ĳ���
//���η�ʽ��
//1.ָ����������ͣ���ʵ�ʿ�������ã���������	--- ֱ����ʾ�������������
//2.����ģ�廯									--- �������еĲ�����Ϊģ����д���
//3.������ģ�廯									--- �������������ģ�廯���д���
//��2.��3.������ģ����Ϻ���ģ�壬��ʵ�ʿ������Եý�Ϊ���ӣ�*/
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
//template<class T1, class T2>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//class Person//��ģ��
//{
//public:
//	T1 m_Name;
//	T2 m_Age;
//	/*��ͨ���еĳ�Ա�����ڴ������п�ʼʱ�Ϳ��Դ�������ģ���еĳ�Ա�����ڱ����õ�ʱ��ſ��Դ���*/
//	Person(T1 name, T2 age)
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
//void printPerson1(Person<string, int>& p1)//1.ָ���������ͣ�ֱ�Ӱ�ģ��Ĳ����б������ش��뵽�����Ĳ����б��У���ʵ�ʿ�������ã���������
//{
//	p1.showPerson();
//}
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p2)//2.����ģ�廯
//{	
//	/*����ѧϰһ�£�����������ô�Ƶ�T������������͵ģ�������ʾ������*/
//	cout << "�Ƶ�����T1����������Ϊ��" << typeid(T1).name() << endl;//����Ƶ�����������������string����ʽ��ʾ����
//	cout << "�Ƶ�����T2����������Ϊ��" << typeid(T2).name() << endl;//����Ƶ�����������������string����ʽ��ʾ����
//	/*������һ������ʹ�� typeid ������ʱ���㽫�õ�һ�� type_info ��Ķ����ָ�루ע�⵽����T��Ҳ�Ǳ����Ϊ�����̡��ģ����ö�������˹������͵���ϸ��Ϣ��*/
//	/*�Ƶ�����T1����������Ϊ��class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
//					��ע�⵽��				   string��
//	  �Ƶ�����T2����������Ϊ��int
//	
//	���Կ���������һ�� ��ң����Ϣ����C++������P102��
//	C++���ַ����ࣨ��VS 2022���ԡ����̡���ʾ����string��ȫ���ǳ���*/
//
//	p2.showPerson();
//}
//
//template<class T>
//void printPerson3(T& p3)//3.��������Person����ģ�廯����ʱ�򴫲δ�����һ��Person��
//{
//	/*����ѧϰһ�£�����������ô�Ƶ�T������������͵ģ�������ʾ������*/
//	cout << "�Ƶ�����T����������Ϊ��" << typeid(T).name() << endl;//����Ƶ�����������������string����ʽ��ʾ����
//	/*������һ������ʹ�� typeid ������ʱ���㽫�õ�һ�� type_info ��Ķ����ָ�루ע�⵽����T��Ҳ�Ǳ����Ϊ�����̡��ģ����ö�������˹������͵���ϸ��Ϣ��*/
//	/*�Ƶ�����T����������Ϊ��class Person<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int>
//					ע�⵽�� class Person				   string																  int*/
//	
//	p3.showPerson();
//}
//
//void test1()
//{
//	Person<string, int>p1("��Сң", 18);
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p1("��Сң", 18);����д�Ǵ����*/
//	printPerson1(p1);
//}
//
//void test2()
//{
//	Person<string, int>p2("����С��", 18);
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p1("��Сң", 18);����д�Ǵ����*/
//	printPerson2(p2);
//}
//
//void test3()
//{
//	Person<string, int>p3("��С��", 18);
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p1("��Сң", 18);����д�Ǵ����*/
//	printPerson3(p3);
//}
//
//int main()
//{
//	cout << "test1();\n";
//	test1();
//	cout << "test2();\n";
//	test2();
//	cout << "test3();\n";
//	test3();
//
//	system("pause");
//	return 0;
//}