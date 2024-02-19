//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string输出等等(cout)的时候需要使用
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*学习模板，是为了在STL中运用系统提供的模板*/
///*类模板*/
//
//class Person1//普通类
//{
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1\n";
//	}
//	/*普通类中的成员函数在被调用之前就可以创建，类模板中的成员函数在被调用的时候才可以创建*/
//};
//
//class Person2//普通类
//{
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2\n";
//	}
//	/*普通类中的成员函数在被调用之前就可以创建，类模板中的成员函数在被调用的时候才可以创建*/
//};
//
//template<class T>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//class Person//类模板
//{
//public:
//	T obj;//数据类型为虚拟类型T的虚拟成员obj
//	/*普通类中的成员函数在代码运行开始时就可以创建，类模板中的成员函数在被调用的时候才可以创建*/
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//	/*事实上，这里的obj到底是Person1类型的还是Person2类型的？未知。
//	所以，showPerson1(),showPerson2()中会有一个（虽然不知道是哪一个）不能被调用
//	但是在写出底下的test1()之前来Fn F7，居然编译通过了！
//	事实上你敲代码的时候发现，上面的showPerson1(),showPerson2()并没有被编译器标记为“函数黄”
//	这说明：类模板中的成员函数在被调用之前，是不能被创建的
//	
//	在写出底下的test1()之后可以发现：Fn F7编译，
//	报错：error C2039: "showPerson2": 不是 "Person1" 的成员
//	这说明：类模板中的成员函数在被调用的时候才可以创建*/
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
//	Person<Person1>p1;
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p1;这样写是错误的*/
//	p1.func1();
//	p1.func2();
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
//	/*cout << "test2();\n";
//	test2();*/
//
//	system("pause");
//	return 0;
//}