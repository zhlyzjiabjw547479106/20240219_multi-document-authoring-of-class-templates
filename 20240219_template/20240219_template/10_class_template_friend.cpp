//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string输出(cout)等等的时候需要使用
//using namespace std;
//
///*P.S. 在按 Ctrl+K+C/U 的时候，不小心误按了，偶然发现：
//https://learn.microsoft.com/zh-cn/visualstudio/ide/how-to-change-text-case-in-the-editor?view=vs-2022#to-change-text-case
//在编辑器中更改文本大小写
//选择要转换的文本。
//要将文本全部转换为大写，请选择“编辑”>“高级”>“转换为大写”，
//或按 Ctrl+Shift+U 。
//要将文本全部转换为小写，请选择“编辑”>“高级”>“转换为小写”，
//或按 Ctrl+U 。 
//（如果已安装 C++ 开发工作负载，可以通过其他命令使用此键绑定。）*/
//
///*模板和STL：《遥感信息处理C++基础》P133*/
///*学习模板，是为了在STL中运用系统提供的模板*/
///*类模板*/
//
///*方案一：为了让编译器知道有一个在类外实现的全局函数showPersonOut()的存在，需要把这个全局函数showPersonOut()写到class Person实现定义的前面
//然而showPersonOut()需要知道有class Person的存在，因此需要在前面先告诉编译器有这个类存在
//（VS编译器允许函数和类的“先声明后实现”，正是为了应对上述问题。
//这些问题源于：VS编译器在运行之前需要知道很多东西(函数、类……)的定义）*/
//template<class TName, class TAge>
//class Person;
//
///*在类外实现全局函数*/
//template<class TName, class TAge>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
//void showPersonOut(Person<TName, TAge> p)//加上friend之后，类内实现的全局函数showPerson(Person<TName, TAge> p)可以访问类Person内的私有属性m_Name和m_Age
//{
//	cout << "showPerson:\n";
//	cout << "Name: " << p.m_Name << "\tAge: " << p.m_Age << endl << endl;
//	//cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//	/*错误原因：
//	C2355	“this”: 只能在非静态成员函数或非静态数据成员初始值设定项的内部引用
//	（然而这是个全局函数）*/
//}
//
///*方案二【不可行】：为了让编译器知道有一个在类外实现的全局函数showPersonOut()的存在，
//似乎应该把这个全局函数showPersonOut()写到class Person实现定义的前面
//然而showPersonOut()又需要知道有class Person的存在，因此：
//就干脆把这个全局函数showPersonOut()写到class Person实现定义的后面，
//只在class Person实现定义的前面留一个空的函数声明。
//（然而这个方案二是行不通的，因为下面的这个“空的函数声明”里面还是有类Person在里面。只能用方案一了）
//*/
////template<class TName, class TAge>
////void showPersonOut(Person<TName, TAge> p);
//
//template<class TName, class TAge>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//class Person//类模板
//{
//	//用类内实现的全局函数（而非类的成员函数）来打印出Person的信息：
//	/*建议尽量使用全局函数的类内实现，较为简单，且编译器可以直接识别*/
//	friend void showPerson(Person<TName, TAge> p)//加上friend之后，类内实现的全局函数showPerson(Person<TName, TAge> p)可以访问类Person内的私有属性m_Name和m_Age
//	{
//		cout << "showPerson:\n";
//		cout << "Name: " << p.m_Name << "\tAge: " << p.m_Age << endl << endl;
//		//cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//		/*错误原因：
//		C2355	“this”: 只能在非静态成员函数或非静态数据成员初始值设定项的内部引用
//		（然而这是个全局函数）*/
//	}
//	friend void showPersonOut<>(Person<TName, TAge> p);
//	/*必须要在类内说明：这是一个函数模版（而非普通函数）的声明，以对应在类外的函数模板的实现
//	否则：Fn F7，链接阶段报错：fatal error LNK1120: 1 个无法解析的外部命令
//	解决方法：在函数的参数列表前面(Person<TName, TAge> p)加一个空模板参数列表<>*/
//public:
//	Person(TName name, TAge age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	
//private:
//	TName m_Name;
//	TAge m_Age;
//};
//
/////*在类外实现全局函数*/
////template<class TName, class TAge>//声明一个类模板：提高代码的复用性，将数据类型也抽象出来（参数化）
////void showPersonOut(Person<TName, TAge> p)//加上friend之后，类内实现的全局函数showPerson(Person<TName, TAge> p)可以访问类Person内的私有属性m_Name和m_Age
////{
////	cout << "showPerson:\n";
////	cout << "Name: " << p.m_Name << "\tAge: " << p.m_Age << endl << endl;
////	//cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
////	/*错误原因：
////	C2355	“this”: 只能在非静态成员函数或非静态数据成员初始值设定项的内部引用
////	（然而这是个全局函数）*/
////}
//
//void test1()
//{
//	Person<string, int>p1("珞小遥", 18);
//	/*<>里面是模板的参数列表
//	类模板不能像函数模板那样进行自动类型推导，<>以及里面的类模板的参数列表必不可少。
//	例如：Person p1("珞小遥", 18);这样写是错误的*/
//	showPerson(p1);//如果在类里面不加上friend就会报错：未定义标识符
//	/*编译器给出的“可能的修补程序”里面有个加作用域Person::，
//	这是没有用的，因为showPerson()已经是个全局函数了，本来就不需要加作用域*/
//	showPersonOut(p1);
//}
//
//int main()
//{
//	cout << "test1();\n";
//	test1();
//
//	system("pause");
//	return 0;
//}