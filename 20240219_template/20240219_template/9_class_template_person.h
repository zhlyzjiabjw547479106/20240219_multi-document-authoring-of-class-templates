#define _CRT_SECURE_NO_WARNINGS 1
#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>
#include<string>//string���(cout)�ȵȵ�ʱ����Ҫʹ��
using namespace std;

/*ģ���STL����ң����Ϣ����C++������P133*/
/*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
/*��ģ��ĳ�Ա����������ʵ��*/
/*��ģ��ķ��ļ���д��
����Ƚ϶������£����ÿ����д��������һ��.cppԴ�ļ�����*/

template<class T1, class T2>
class Person//��ģ��
{
public:
	T1 m_Name;
	T2 m_Age;
	Person(T1 name, T2 age);
	void showPerson();
};
