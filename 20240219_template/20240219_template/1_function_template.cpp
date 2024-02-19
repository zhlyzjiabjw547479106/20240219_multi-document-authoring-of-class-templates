//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*学习模板，是为了在STL中运用系统提供的模板*/
///*普通函数可以发生隐式类型转换（自动类型转换）
//函数模板：如果调用时利用的是自动类型推导，不能发生隐式类型转换；
//如果利用的是显示指定类型，可以发生隐式类型转换*/
//
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）字母T是Type的意思，可以换成其它的，使用字母T是习惯
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<class T>/*class可以替换为typename（效果一样，后面还有“类模板”）*/
//void func()
//{
//	cout << "调用函数模板func()\n\n";
//}
//
//int myAddGeneral(int a, int b)
//{
//	return a + b;
//}
//
//template<class T>
//T myAddTemplate(T a, T b)
//{
//	return a + b;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	//使用函数模板有两种方法：
//	mySwap(a, b);//1.由编译器进行自动类型推导
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	mySwap<int>(a, b);//2.由程序员显示指定类型
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	cout << endl;
//
//	double c = 1.2, d = 2.33;
//	mySwap(c, d);//1.由编译器进行自动类型推导
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//	mySwap<double>(c, d);//2.由程序员显式指定类型
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	/*函数模板使用时的两个注意事项：*/
//	char ch = 'a';
//	//mySwap(a, ch);//报错，因为编译器无法自动推导出一致的数据类型，无法使用模板
//
//	//func();//编译器没有任何可以进行自动类型推导的线索。随便给它一个指定的显示数据类型即可
//	func<int>();
//}
//
//void test2()
//{
//	int a = 10, b = 20;
//	char c = 'c';//'a' = 97, 'c' = 99;
//	cout << myAddGeneral(a, c) << endl;//109，这里发生了隐式类型转换，把'c'取了它的ASCII码值
//	//cout << myAddTemplate(a, c) << endl;//报错。因为因为编译器无法自动推导出一致的数据类型，无法使用模板
//	cout << myAddTemplate<int>(a, c) << endl;//109。显式指定类型，让编译器把所有不是显式指定类型的数据转化为显式指定的类型
//}
//
//int main()
//{
//	cout << "test1();\n";
//	test1();
//	cout << "\n\ntest2();\n";
//	test2();
//
//	system("pause");
//	return 0;
//}