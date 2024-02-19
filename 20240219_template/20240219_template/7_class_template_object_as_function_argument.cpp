//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string输出(cout)等等的时候需要使用
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*学习模板，是为了在STL中运用系统提供的模板*/
///*类模板实例化出来的对象，可以作为函数的参数
//传参方式：
//1.指定传入的类型（在实际开发中最常用，最清晰）	--- 直接显示对象的数据类型
//2.参数模板化									--- 将对象中的参数变为模板进行传递
//3.整个类模板化									--- 将这个对象类型模板化进行传递
//（2.与3.属于类模板配合函数模板，在实际开发中显得较为复杂）*/
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
//template<class T1, class T2>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//class Person//类模板
//{
//public:
//	T1 m_Name;
//	T2 m_Age;
//	/*普通类中的成员函数在代码运行开始时就可以创建，类模板中的成员函数在被调用的时候才可以创建*/
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
//void printPerson1(Person<string, int>& p1)//1.指定传入类型：直接把模板的参数列表完整地传入到函数的参数列表当中（在实际开发中最常用，最清晰）
//{
//	p1.showPerson();
//}
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p2)//2.参数模板化
//{	
//	/*这里学习一下：编译器是怎么推导T代表的数据类型的？可以显示出来：*/
//	cout << "推导出的T1的数据类型为：" << typeid(T1).name() << endl;//会把推导出来的数据类型以string的形式显示出来
//	cout << "推导出的T2的数据类型为：" << typeid(T2).name() << endl;//会把推导出来的数据类型以string的形式显示出来
//	/*（当对一个对象使用 typeid 操作符时，你将得到一个 type_info 类的对象的指针（注意到：“T”也是被标记为“类绿”的），该对象包含了关于类型的详细信息）*/
//	/*推导出的T1的数据类型为：class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
//					（注意到：				   string）
//	  推导出的T2的数据类型为：int
//	
//	可以看见：（大一下 《遥感信息处理C++基础》P102）
//	C++的字符串类（在VS 2022中以“类绿”显示）：string的全名非常长*/
//
//	p2.showPerson();
//}
//
//template<class T>
//void printPerson3(T& p3)//3.把整个类Person都给模板化，到时候传参传进来一个Person类
//{
//	/*这里学习一下：编译器是怎么推导T代表的数据类型的？可以显示出来：*/
//	cout << "推导出的T的数据类型为：" << typeid(T).name() << endl;//会把推导出来的数据类型以string的形式显示出来
//	/*（当对一个对象使用 typeid 操作符时，你将得到一个 type_info 类的对象的指针（注意到：“T”也是被标记为“类绿”的），该对象包含了关于类型的详细信息）*/
//	/*推导出的T的数据类型为：class Person<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int>
//					注意到： class Person				   string																  int*/
//	
//	p3.showPerson();
//}
//
//void test1()
//{
//	Person<string, int>p1("珞小遥", 18);
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p1("珞小遥", 18);这样写是错误的*/
//	printPerson1(p1);
//}
//
//void test2()
//{
//	Person<string, int>p2("珞珈小帮", 18);
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p1("珞小遥", 18);这样写是错误的*/
//	printPerson2(p2);
//}
//
//void test3()
//{
//	Person<string, int>p3("华小科", 18);
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p1("珞小遥", 18);这样写是错误的*/
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