//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*普通函数可以发生隐式类型转换（自动类型转换）
//函数模板：如果调用时利用的是自动类型推导，不能发生隐式类型转换；
//如果利用的是显示指定类型，可以发生隐式类型转换*/
///*普通函数与函数模板的调用规则
//1.发生函数重载的时候，如果函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表或者显示指定类型来强制调用函数模板
//3.函数模板可以发生函数重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板
//实际开发中，如果有函数模板，最好就不要提供普通函数了，避免出现意外的二义性*/
///*模板不是万能的，例如：error C2676: 
//T为数组的时候，无法进行赋值操作；T为自定义的类的时候，无法进行比较大小操作
//因此C++提供了模板的重载，可以为特定的类型提供具体化的模板*/
///*学习模板，是为了在STL中运用系统提供的模板*/
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
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
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
//		cout << "a ≠ b\n\n";
//	}
//
//}
//
//void test2()
//{
//	Person p1("珞小遥", 18);
//	Person p2("珞小遥", 18);
//
//	bool ret = myCompare(p1, p2);
//
//	if (ret)
//	{
//		cout << "a = b\n\n";
//	}
//	else
//	{
//		cout << "a ≠ b\n\n";
//	}
//	/*二进制“==”:“T”不定义该运算符或到预定义运算符可接收的类型的转换
//	解决方法：①重载运算符“==”
//	②具体化Person类的函数模板template<> bool myCompare(Person& p1, Person& p2)，具体化的函数模板会被优先调用*/
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