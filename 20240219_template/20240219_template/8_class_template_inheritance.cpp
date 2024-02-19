//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string输出(cout)等等的时候需要使用
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*学习模板，是为了在STL中运用系统提供的模板*/
///*当类模板碰到继承时，需要注意：
//1.当派生类继承的基类是一个类模板时，派生类在声明的同时必须指定出基类中T的数据类型，
//  否则派生类将无法继承基类，编译器无法给派生类分配内存
//  （原因：在没有指明基类作为一个类模板中，T的数据类型，编译器不知道应该分配多大的内存）
//2.如果想灵活指定出基类中T的类型，派生类也需变为类模板*/
//
//template<class T>
//class Base//基类
//{
//	
//};
//
///*1.当派生类继承的基类是一个类模板时，派生类在声明的同时必须指定出基类中T的数据类型，
//  否则派生类将无法继承基类，编译器无法给派生类分配内存
//  （原因：在没有指明基类作为一个类模板中，T的数据类型，编译器不知道应该分配多大的内存）*/
//class Inherit:public Base<int>//派生类
//	/*如果没有在声明这个派生类Inherit的同时指明基类中T的数据类型<int>，
//	这里将会直接报错：缺少 类模板 的参数列表
//	（报错原因：在没有指明基类作为一个类模板中，T的数据类型，编译器不知道应该分配多大的内存）*/
//{
//	
//};
//
///*2.如果想灵活指定出基类中T的类型，派生类也需变为类模板*/
//template<class T, class Ti>
//class InheritT :public Base<Ti>//派生类
//	/*如果没有把派生类变为类模板template<class T, class Ti>
//	这里将会直接报错：未定义标识符"T"
//	（报错原因：在没有指明基类作为一个类模板中，T的数据类型，编译器不知道应该分配多大的内存；
//	在派生类当中，还是不知道是什么数据类型）*/
//{
//public:
//	T obj;
//	InheritT()
//	{
//		cout << "T的数据类型为：" << typeid(T).name() << endl;
//		cout << "Ti的数据类型为：" << typeid(Ti).name() << endl;
//		/*T的数据类型为：int
//		Ti的数据类型为：char*/
//	}
//};
//
//void test1()
//{
//	Inherit i1;
//}
//
//void test2()
//{
//	InheritT<int, char> i2;//T = int，给基类；Ti = char，给派生类
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