#define _CRT_SECURE_NO_WARNINGS 1
#pragma once//防止头文件重复包含
#include <iostream>
#include<string>//string输出(cout)等等的时候需要使用
using namespace std;

/*模板和STL：《遥感信息处理C++基础》P133*/
/*学习模板，是为了在STL中运用系统提供的模板*/
/*类模板的成员函数在类外实现*/
/*类模板的分文件编写：
在类比较多的情况下，会把每个类写到单独的一个.cpp源文件当中*/

template<class T1, class T2>
class Person//类模板
{
public:
	T1 m_Name;
	T2 m_Age;
	Person(T1 name, T2 age);
	void showPerson();
};
