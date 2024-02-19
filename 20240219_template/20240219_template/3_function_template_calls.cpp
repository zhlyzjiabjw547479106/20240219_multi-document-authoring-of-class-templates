//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
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
//
//void myPrint(int a, int b)//普通函数
//{
//	cout << "调用普通函数myPrint(int a, int b)\n\n";
//}
//
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//void myPrint(T a, T b)
//{
//	cout << "调用函数模板myPrint(T a, T b)\n\n";
//}
//
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//void myPrint(T a, T b, T c)
//{
//	cout << "调用函数模板myPrint(T a, T b, T c)\n\n";
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//
//	myPrint(a, b);//1.发生函数重载的时候，如果函数模板和普通函数都可以调用，优先调用普通函数
//	/*调用普通函数myPrint(int a, int b)*/
//
//	myPrint<>(a, b);//2.空模板参数列表，强制调用函数模板
//	/*调用函数模板myPrint(T a, T b)*/
//
//	myPrint<int>(a, b);//2.显示指定类型，强制调用函数模板
//	/*调用函数模板myPrint(T a, T b)*/	
//	
//	myPrint<int>(a, b, 6);//3.函数模板也可以发生函数重载
//	/*调用函数模板myPrint(T a, T b, T c)*/
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);//4.由于普通函数还需要进行隐式类型转换，所以它与函数模板产生的匹配更好，优先调用函数模板
//	/*调用函数模板myPrint(T a, T b)*/
//	
//
//
//}
//
//
//int main()
//{
//	cout << "test1();\n";
//	test1();
//
//	system("pause");
//	return 0;
//}