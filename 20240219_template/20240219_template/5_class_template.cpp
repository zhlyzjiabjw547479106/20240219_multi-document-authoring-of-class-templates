//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string输出(cout)等等的时候需要使用
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*学习模板，是为了在STL中运用系统提供的模板*/
///*类模板*/
//
//class PersonGeneral//普通类
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
//template<class TName, class TAge>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//class Person//类模板
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
//template<class TName, class TAge = int>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*注意：函数模板不能像这样带有默认的数据类型*/
//class Person_DefaultDataType//类模板，含有默认的数据类型
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
//	Person<string, int>p1("珞小遥", 18);
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p1("珞小遥", 18);这样写是错误的*/
//	p1.showPerson();
//
//}
//
//void test2()
//{
//	Person_DefaultDataType<string>p2("珞小遥", 18);
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p2("珞小遥", 18);这样写是错误的
//	但是这里的Person_DefaultDataType类模板在定义的时候带有默认的数据类型，
//	在类模板的参数列表里的默认的数据类型可以不用再对象中再次说明
//	注意：函数模板不能带有默认的数据类型*/
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