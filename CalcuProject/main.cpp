#include <iostream>
#include "Calcu.h"
using namespace std;

int main()
{
	Calcu calcu;
	double num1, num2, num3, num4, num5, num6, num7, num8;
	cout << "������Ҫ��ӵ���������";
	cin >> num1 >> num2;
	cout << "����Ľ���ǣ�" << calcu.Add(num1, num2) << endl;
	cout << "������Ҫ�������������";
	cin >> num3 >> num4;
	cout << "����Ľ���ǣ�" << calcu.Sub(num3, num4) << endl;
	cout << "������Ҫ��˵���������";
	cin >> num5 >> num6;
	cout << "����Ľ���ǣ�" << calcu.Multi(num5, num6) << endl;
	cout << "������Ҫ�������������";
	cin >> num7 >> num8;
	cout << "����Ľ���ǣ�" << calcu.Divide(num7, num8) << endl;
}