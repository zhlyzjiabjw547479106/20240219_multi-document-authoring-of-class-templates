//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
///*ģ���STL����ң����Ϣ����C++������P133
//
//���ú���ģ�壬ʵ�ֶ������������ĺ���
//��С��������ʹ��ѡ���㷨���ֱ�ʹ��int��char���͵�������в���*/
//
//template<typename T>//����һ������ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<typename T>//����һ������ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int min = i;//���϶����ֵ���±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[min] > arr[j])//����϶������ֵ����һ�ֱ���֮���ֵ����ֵҪС
//			{
//				min = j;//�������ֵ���±�
//			}
//		}
//		if (min != i)//����϶������ֵ���±겻����һ�ֱ���֮���ֵ����ֵ���±�
//		{
//			mySwap(arr[min], arr[i]);
//		}
//	}
//}
//
//template<typename T>//����һ������ģ�壺��ߴ���ĸ����ԣ�����������Ҳ�����������������
///*typename�����滻Ϊclass��Ч��һ�������滹�С���ģ�塱��*/
//void printArr(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	char charArr[] = "whurs";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArr(charArr, num);
//}
//
//void test2()
//{
//	int intArr[] = { 4,3,0,0,7,9 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArr(intArr, num);
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	system("pause");
//	return 0;
//}