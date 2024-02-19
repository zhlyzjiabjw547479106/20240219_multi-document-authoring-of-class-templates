//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
///*模板和STL：《遥感信息处理C++基础》P133
//
//利用函数模板，实现对数组进行排序的函数
//从小到大排序，使用选择算法，分别使用int和char类型的数组进行测试*/
//
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int min = i;//先认定最大值的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[min] > arr[j])//如果认定的最大值比这一轮遍历之后发现的最大值要小
//			{
//				min = j;//更新最大值的下标
//			}
//		}
//		if (min != i)//如果认定的最大值的下标不是这一轮遍历之后发现的最大值的下标
//		{
//			mySwap(arr[min], arr[i]);
//		}
//	}
//}
//
//template<typename T>//声明一个函数模板：提高代码的复用性，将数据类型也抽象出来（参数化）
///*typename可以替换为class（效果一样，后面还有“类模板”）*/
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