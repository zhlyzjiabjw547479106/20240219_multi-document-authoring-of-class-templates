//#include "9_class_template_person.h"//Fn F7�󱨴�fatal error LNK1120: 2 ���޷��������ⲿ����
/*���ݴ����б�������һ���һ��ѱ������еġ����� "void __cdecl test1(void)" (?test1@@YAXXZ) �������˸÷��š���֪��
�⡰2 ����ָ����void test1()��������д���
	Person<string, int>p1("��Сң", 18);
	p1.showPerson();
	������ע�͵�֮��Ͳ��ᱨ��*/
#include "9_class_template_person.cpp"//�������1����.h��Ϊ.cpp�������ã���Ϊ������������Դ��ģ�һ�㶼�ǰ���Դ�ļ���
/*�������2���Ƽ��������ã�����.h��.cpp���е�����д��һ�𣬺�׺����Ϊ.hpp�ļ�
�������main�������ڵ�Դ�ļ�����ǰ��#include "9_class_template_person.hpp"����
��.hpp������һ��Ĭ�ϵ��ļ����ͣ��Ǵ�����ģ��ķ��ļ���д�����⵱�е�Լ���׳ɵ��ļ���׺��ϰ���ϣ�����Ҳ���ڱ�������ߵġ�ͷ�ļ����ļ��е��У�
����Ͳ�ȥ���ˣ���� https://www.bilibili.com/video/BV1et411b73Z/?p=180&spm_id_from=pageDriver&vd_source=057c21513e5e5504cbd6236251ad85fb 
11��10��ʼ������*/


/*�ᵽ������Ĳ���ԭ��
* 
* д��9_class_template_person.h���е���Person�еĳ�Ա����
	Person(T1 name, T2 age);
	void showPerson();
�����ڵ���֮ǰ�ǲ��ᴴ���ġ�

C/C++�ı�����ִ�д���Ĭ��Ϊ����ǰ���󡱵ġ�
������������#include "9_class_template_person.h"��ʱ�����ͷ�ļ��в�δû��������Person����������Ա�����������ڵ���֮ǰ�ǲ��ᴴ���ģ���
��ʱ��������δ������9_class_template_person.cpp����ʵ�ֵ����������������Ա����޷��������ⲿ���

�����ʽ1ͨ���ñ�����������9_class_template_person.cpp����ʵ�ֵ���������Person�ĳ�Ա����������ˡ��޷��������ⲿ���������
*/

/*ģ���STL����ң����Ϣ����C++������P133*/
/*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
/*��ģ��ĳ�Ա����������ʵ��*/
/*��ģ��ķ��ļ���д��
����Ƚ϶������£����ÿ����д��������һ��.cppԴ�ļ�����*/

void test1()
{
	Person<string, int>p1("��Сң", 18);
	p1.showPerson();
}

int main()
{
	cout << "test1();\n";
	test1();
	

	system("pause");
	return 0;
}