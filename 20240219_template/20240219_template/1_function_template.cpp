//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
///*ģ���STL����ң����Ϣ����C++������P133*/
///*ѧϰģ�壬��Ϊ����STL������ϵͳ�ṩ��ģ��*/
///*��ͨ�������Է�����ʽ����ת�����Զ�����ת����
//����ģ�壺�������ʱ���õ����Զ������Ƶ������ܷ�����ʽ����ת����
//������õ�����ʾָ�����ͣ����Է�����ʽ����ת��*/
//
//template<typename T>//����һ������ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�������������������ĸT��Type����˼�����Ի��������ģ�ʹ����ĸT��ϰ��
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<class T>/*class�����滻Ϊtypename��Ч��һ�������滹�С���ģ�塱��*/
//void func()
//{
//	cout << "���ú���ģ��func()\n\n";
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
//	//ʹ�ú���ģ�������ַ�����
//	mySwap(a, b);//1.�ɱ����������Զ������Ƶ�
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	mySwap<int>(a, b);//2.�ɳ���Ա��ʾָ������
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	cout << endl;
//
//	double c = 1.2, d = 2.33;
//	mySwap(c, d);//1.�ɱ����������Զ������Ƶ�
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//	mySwap<double>(c, d);//2.�ɳ���Ա��ʽָ������
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	/*����ģ��ʹ��ʱ������ע�����*/
//	char ch = 'a';
//	//mySwap(a, ch);//������Ϊ�������޷��Զ��Ƶ���һ�µ��������ͣ��޷�ʹ��ģ��
//
//	//func();//������û���κο��Խ����Զ������Ƶ���������������һ��ָ������ʾ�������ͼ���
//	func<int>();
//}
//
//void test2()
//{
//	int a = 10, b = 20;
//	char c = 'c';//'a' = 97, 'c' = 99;
//	cout << myAddGeneral(a, c) << endl;//109�����﷢������ʽ����ת������'c'ȡ������ASCII��ֵ
//	//cout << myAddTemplate(a, c) << endl;//������Ϊ��Ϊ�������޷��Զ��Ƶ���һ�µ��������ͣ��޷�ʹ��ģ��
//	cout << myAddTemplate<int>(a, c) << endl;//109����ʽָ�����ͣ��ñ����������в�����ʽָ�����͵�����ת��Ϊ��ʽָ��������
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