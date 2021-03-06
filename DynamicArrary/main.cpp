// DynamicArrary.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

// 测试文件

#include <iostream>
#include "MyDynamicArray.h"
using namespace std;

class CFoo
{
public:
	CFoo() { m_nVal = 0; }
	CFoo(int nVal) :m_nVal(nVal) {}
	bool operator==(const CFoo& foo)
	{
		return m_nVal == foo.m_nVal;
	}
private:
	int m_nVal;
};

#if 0
int main()
{
	CArrary ary;
	ary.AddHead(4);
	ary.AddTail(5);   //从当前数组末尾插入
	ary.Insert(1, 9);
	ary.Insert(8, 8);
	ary.Insert(2, 7);
	ary.AddTail(0x43);
	ary.AddTail(0x32);
	ary.AddTail(0x11);
	ary.Insert(1, 0x99);
	ary.Insert(1, 0x54);
	ary.Insert(1, 0x78);

	ary.RemoveHead();
	ary.RemoveTail();
	ary.Remove(4);
	ary.Remove(19);
	cout << ary.Find(999) << endl;
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	//CArrary ary1;
	//ary1 = ary;
	//ary += ary1;

	CArrary ary0(ary);
	CArrary ary1;
	ary1 = ary0;
	ary1 += ary0;

	try
	{
		ary[1] = 0x99;
		ary[99] = 1;	// 越界
	}
	catch (const std::exception & e)
	{
		cout << e.what() << endl;
	}

	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;
	ary.Clear();		//清空（格式化）缓冲区中的数据
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	return 0;
}
#endif // 没有封装模板之前测试

#if 1
int main()
{
	CArrary<int> ary;

	ary.AddHead(4);
	ary.AddTail(5);   //从当前数组末尾插入
	ary.Insert(1, 9);
	ary.Insert(8, 8);
	ary.Insert(2, 7);
	ary.AddTail(10);
	ary.AddTail(11);
	ary.AddTail(12);
	ary.AddHead(999);

	cout << ary.Find(999) << endl;
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	CArrary<int> ary0(ary);
	CArrary<int> ary1;
	ary1 = ary0;
	ary1 += ary0;

	for (auto itr = ary0.begin(); itr != ary0.end(); ++itr)
	{
		cout << *itr << " ";
	}

	cout << endl;
	for (auto itr1 : ary)
	{
		cout << itr1 << " ";
	}
	cout << endl;

	try
	{
		ary[1] = 0x99;
		ary[99] = 1;	// 越界
	}
	catch (const std::exception & e)
	{
		cout << e.what() << endl;
	}

	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;
	ary.Clear();		//清空（格式化）缓冲区中的数据
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	return 0;
}
#endif // 测试 int 类型的数据

#if 0
int main()
{
	CArrary<char> ary;
	ary.AddHead('a');
	ary.AddTail('z');   //从当前数组末尾插入
	ary.Insert(1, 's');
	ary.Insert(8, 'd');
	ary.Insert(2, 'e');
	ary.AddTail('x');
	ary.AddTail('v');
	ary.AddTail('b');
	ary.Insert(1, 'g');
	ary.Insert(1, 'l');
	ary.Insert(1, 'p');

	ary.RemoveHead();
	ary.RemoveTail();
	ary.Remove(4);
	ary.Remove(19);
	cout << ary.Find(999) << endl;
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	CArrary<char> ary0(ary);
	CArrary<char> ary1;
	ary1 = ary0;
	ary1 += ary0;

	for (auto itr = ary.begin(); itr != ary.end(); ++itr)
	{
		cout << *itr << " ";
	}

	cout << endl;
	for (auto itr1 : ary)
	{
		cout << itr1 << " ";
	}
	cout << endl;

	try
	{
		ary[1] = 0x99;
		ary[99] = 1;	// 越界
	}
	catch (const std::exception & e)
	{
		cout << e.what() << endl;
	}

	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;
	ary.Clear();		//清空（格式化）缓冲区中的数据
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	return 0;
}
#endif // 测试 char 类型的数据

// 当传入的数据类型为对象时
#if 0
int main()
{
	CArrary<CFoo> ary;
	ary.Find(999);
	ary.AddHead(4);
	ary.AddTail(5);   //从当前数组末尾插入
	ary.Insert(1, 9);
	ary.Insert(8, 8);
	ary.Insert(2, 7);
	ary.AddTail(0x43);
	ary.AddTail(0x32);
	ary.AddTail(0x11);
	ary.Insert(1, 0x99);
	ary.Insert(1, 0x54);
	ary.Insert(1, 0x78);

	ary.RemoveHead();
	ary.RemoveTail();
	ary.Remove(4);
	ary.Remove(19);
	cout << ary.Find(999) << endl;
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	CArrary<CFoo> ary0(ary);
	CArrary<CFoo> ary1;
	ary1 = ary0;
	ary1 += ary0;

	// 对象自己等于自己
	ary1 = ary1;
	ary.Find(0x999);

	try
	{
		ary[1] = 0x99;
		ary[99] = 1;	// 越界
	}
	catch (const std::exception & e)
	{
		cout << e.what() << endl;
	}

	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;
	ary.Clear();		//清空（格式化）缓冲区中的数据
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	return 0;
}
#endif // 0

#if 0
int main()
{
	CArrary<int> ary;
	for (int i = 0; i <= 9; i++)
	{
		ary.AddHead(i);
	}

	cout << ary.Find(999) << endl;
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	for (auto itr = ary.begin(); itr != ary.end(); ++itr)
	{
		cout << *itr << " ";
	}

	cout << endl;
	for (auto itr1 : ary)
	{
		cout << itr1 << " ";
	}
	cout << endl;

	// 添加 rbegin() rend()

	for (auto itr1 = ary.rbegin(); itr1 != ary.rend(); itr1--)
	{
		cout << *itr1 << " ";
	}
	cout << endl;

	try
	{
		ary[1] = 0x99;
		ary[99] = 1;	// 越界
	}
	catch (const std::exception & e)
	{
		cout << e.what() << endl;
	}

	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;
	ary.Clear();		//清空（格式化）缓冲区中的数据
	cout << "当前缓冲区中存在的有效元素个数为：" << ary.ElementCount() << endl;

	return 0;
}
#endif // 迭代器
