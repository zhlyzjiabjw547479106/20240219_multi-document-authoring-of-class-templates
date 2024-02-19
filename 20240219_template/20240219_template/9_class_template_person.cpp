#include "9_class_template_person.h"

/*类模板的构造函数在类外实现*/
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

/*类模板的普通成员函数在类外实现*/
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "Person:\n";
	cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
}