//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>//string���(cout)�ȵȵ�ʱ����Ҫʹ��
//using namespace std;
//
///*P.S. �ڰ� Ctrl+K+C/U ��ʱ�򣬲�С�����ˣ�żȻ���֣�
//https://learn.microsoft.com/zh-cn/visualstudio/ide/how-to-change-text-case-in-the-editor?view=vs-2022#to-change-text-case
//�ڱ༭���и����ı���Сд
//ѡ��Ҫת�����ı���
//Ҫ���ı�ȫ��ת��Ϊ��д����ѡ�񡰱༭��>���߼���>��ת��Ϊ��д����
//�� Ctrl+Shift+U ��
//Ҫ���ı�ȫ��ת��ΪСд����ѡ�񡰱༭��>���߼���>��ת��ΪСд����
//�� Ctrl+U �� 
//������Ѱ�װ C++ �����������أ�����ͨ����������ʹ�ô˼��󶨡���*/
//
///*ģ���STL����ң����Ϣ����C++������P133*/
///*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
///*��ģ��*/
//
///*����һ��Ϊ���ñ�����֪����һ��������ʵ�ֵ�ȫ�ֺ���showPersonOut()�Ĵ��ڣ���Ҫ�����ȫ�ֺ���showPersonOut()д��class Personʵ�ֶ����ǰ��
//Ȼ��showPersonOut()��Ҫ֪����class Person�Ĵ��ڣ������Ҫ��ǰ���ȸ��߱���������������
//��VS����������������ġ���������ʵ�֡�������Ϊ��Ӧ���������⡣
//��Щ����Դ�ڣ�VS������������֮ǰ��Ҫ֪���ܶණ��(�������࡭��)�Ķ��壩*/
//template<class TName, class TAge>
//class Person;
//
///*������ʵ��ȫ�ֺ���*/
//template<class TName, class TAge>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
//void showPersonOut(Person<TName, TAge> p)//����friend֮������ʵ�ֵ�ȫ�ֺ���showPerson(Person<TName, TAge> p)���Է�����Person�ڵ�˽������m_Name��m_Age
//{
//	cout << "showPerson:\n";
//	cout << "Name: " << p.m_Name << "\tAge: " << p.m_Age << endl << endl;
//	//cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//	/*����ԭ��
//	C2355	��this��: ֻ���ڷǾ�̬��Ա������Ǿ�̬���ݳ�Ա��ʼֵ�趨����ڲ�����
//	��Ȼ�����Ǹ�ȫ�ֺ�����*/
//}
//
///*�������������С���Ϊ���ñ�����֪����һ��������ʵ�ֵ�ȫ�ֺ���showPersonOut()�Ĵ��ڣ�
//�ƺ�Ӧ�ð����ȫ�ֺ���showPersonOut()д��class Personʵ�ֶ����ǰ��
//Ȼ��showPersonOut()����Ҫ֪����class Person�Ĵ��ڣ���ˣ�
//�͸ɴ�����ȫ�ֺ���showPersonOut()д��class Personʵ�ֶ���ĺ��棬
//ֻ��class Personʵ�ֶ����ǰ����һ���յĺ���������
//��Ȼ��������������в�ͨ�ģ���Ϊ�����������յĺ������������滹������Person�����档ֻ���÷���һ�ˣ�
//*/
////template<class TName, class TAge>
////void showPersonOut(Person<TName, TAge> p);
//
//template<class TName, class TAge>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//class Person//��ģ��
//{
//	//������ʵ�ֵ�ȫ�ֺ�����������ĳ�Ա����������ӡ��Person����Ϣ��
//	/*���龡��ʹ��ȫ�ֺ���������ʵ�֣���Ϊ�򵥣��ұ���������ֱ��ʶ��*/
//	friend void showPerson(Person<TName, TAge> p)//����friend֮������ʵ�ֵ�ȫ�ֺ���showPerson(Person<TName, TAge> p)���Է�����Person�ڵ�˽������m_Name��m_Age
//	{
//		cout << "showPerson:\n";
//		cout << "Name: " << p.m_Name << "\tAge: " << p.m_Age << endl << endl;
//		//cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
//		/*����ԭ��
//		C2355	��this��: ֻ���ڷǾ�̬��Ա������Ǿ�̬���ݳ�Ա��ʼֵ�趨����ڲ�����
//		��Ȼ�����Ǹ�ȫ�ֺ�����*/
//	}
//	friend void showPersonOut<>(Person<TName, TAge> p);
//	/*����Ҫ������˵��������һ������ģ�棨������ͨ���������������Զ�Ӧ������ĺ���ģ���ʵ��
//	����Fn F7�����ӽ׶α���fatal error LNK1120: 1 ���޷��������ⲿ����
//	����������ں����Ĳ����б�ǰ��(Person<TName, TAge> p)��һ����ģ������б�<>*/
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
/////*������ʵ��ȫ�ֺ���*/
////template<class TName, class TAge>//����һ����ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
////void showPersonOut(Person<TName, TAge> p)//����friend֮������ʵ�ֵ�ȫ�ֺ���showPerson(Person<TName, TAge> p)���Է�����Person�ڵ�˽������m_Name��m_Age
////{
////	cout << "showPerson:\n";
////	cout << "Name: " << p.m_Name << "\tAge: " << p.m_Age << endl << endl;
////	//cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl << endl;
////	/*����ԭ��
////	C2355	��this��: ֻ���ڷǾ�̬��Ա������Ǿ�̬���ݳ�Ա��ʼֵ�趨����ڲ�����
////	��Ȼ�����Ǹ�ȫ�ֺ�����*/
////}
//
//void test1()
//{
//	Person<string, int>p1("��Сң", 18);
//	/*<>������ģ��Ĳ����б�
//	��ģ�岻������ģ�����������Զ������Ƶ���<>�Լ��������ģ��Ĳ����б�ز����١�
//	���磺Person p1("��Сң", 18);����д�Ǵ����*/
//	showPerson(p1);//����������治����friend�ͻᱨ��δ�����ʶ��
//	/*�����������ġ����ܵ��޲����������и���������Person::��
//	����û���õģ���ΪshowPerson()�Ѿ��Ǹ�ȫ�ֺ����ˣ������Ͳ���Ҫ��������*/
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