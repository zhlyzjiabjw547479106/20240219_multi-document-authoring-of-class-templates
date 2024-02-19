#include "9_class_template_person.h"

/*��ģ��Ĺ��캯��������ʵ��*/
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

/*��ģ�����ͨ��Ա����������ʵ��*/
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "Person:\n";
	cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
}