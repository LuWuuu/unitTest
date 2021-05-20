#include <iostream>
#include "Calcu.h"
using namespace std;

int main()
{
	Calcu calcu;
	double num1, num2, num3, num4, num5, num6, num7, num8;
	cout << "请输入要相加的两个数：";
	cin >> num1 >> num2;
	cout << "计算的结果是：" << calcu.Add(num1, num2) << endl;
	cout << "请输入要相减的两个数：";
	cin >> num3 >> num4;
	cout << "计算的结果是：" << calcu.Sub(num3, num4) << endl;
	cout << "请输入要相乘的两个数：";
	cin >> num5 >> num6;
	cout << "计算的结果是：" << calcu.Multi(num5, num6) << endl;
	cout << "请输入要相除的两个数：";
	cin >> num7 >> num8;
	cout << "计算的结果是：" << calcu.Divide(num7, num8) << endl;
}