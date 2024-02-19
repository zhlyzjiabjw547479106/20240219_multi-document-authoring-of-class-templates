//#include "9_class_template_person.h"//Fn F7后报错：fatal error LNK1120: 2 个无法解析的外部命令
/*根据错误列表中上面一点的一大堆报错结果中的“函数 "void __cdecl test1(void)" (?test1@@YAXXZ) 中引用了该符号”可知：
这“2 个”指的是void test1()里面的两行代码
	Person<string, int>p1("珞小遥", 18);
	p1.showPerson();
	把它们注释掉之后就不会报错*/
#include "9_class_template_person.cpp"//解决方法1：把.h改为.cpp（不常用，因为很少这样包含源码的，一般都是包含源文件）
/*解决方法2（推荐，更常用）：将.h与.cpp当中的内容写到一起，后缀名改为.hpp文件
再在这里（main函数所在的源文件）最前面#include "9_class_template_person.hpp"即可
（.hpp并不是一个默认的文件类型，是处理“类模板的分文件编写”问题当中的约定俗成的文件后缀。习惯上，把它也放在编译器左边的“头文件”文件夹当中）
这里就不去试了，详见 https://www.bilibili.com/video/BV1et411b73Z/?p=180&spm_id_from=pageDriver&vd_source=057c21513e5e5504cbd6236251ad85fb 
11：10开始的内容*/


/*提到的问题的产生原因：
* 
* 写在9_class_template_person.h当中的类Person中的成员函数
	Person(T1 name, T2 age);
	void showPerson();
它们在调用之前是不会创建的。

C/C++的编译器执行代码默认为“从前到后”的。
当编译器看到#include "9_class_template_person.h"的时候，这个头文件中并未没有生成类Person的这两个成员函数（它们在调用之前是不会创建的），
此时编译器还未见过在9_class_template_person.cpp里面实现的这两个函数，所以报错“无法解析的外部命令”

解决方式1通过让编译器看到在9_class_template_person.cpp里面实现的这两个类Person的成员函数，解决了“无法解析的外部命令”的问题
*/

/*模板和STL：《遥感信息处理C++基础》P133*/
/*学习模板，是为了在STL中运用系统提供的模板*/
/*类模板的成员函数在类外实现*/
/*类模板的分文件编写：
在类比较多的情况下，会把每个类写到单独的一个.cpp源文件当中*/

void test1()
{
	Person<string, int>p1("珞小遥", 18);
	p1.showPerson();
}

int main()
{
	cout << "test1();\n";
	test1();
	

	system("pause");
	return 0;
}