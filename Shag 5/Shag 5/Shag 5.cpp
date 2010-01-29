#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
using namespace std;
int main()
{
	system ("color 0a");
	int a, b, t, j, zadan, i;
	setlocale (LC_ALL, "rus");
Start:
	cout << "1. Создать программу, которая выводит на экран простые числа в диапазоне от 2 до 1000." <<endl;
	cout << "(Число называется простым, если оно делится только на 1 и на само себя без остатка; " <<endl;
	cout << "причем числа 1 и 2 простыми не считаются). " <<endl;
	cout << "2. Написать программу, которая выводит на экран - следующую фигуру:" <<endl;
	cout << "*********************" <<endl;
	cout << "*                   *" <<endl;
	cout << "*                   *" <<endl;
	cout << "*                   *" <<endl;
	cout << "*                   *" <<endl;
	cout << "*                   *" <<endl;
	cout << "*                   *" <<endl;
	cout << "*********************" <<endl;
	cout << "ширина и высота фигуры задаются пользователем с клавиатуры." <<endl;
	cout << "3. При помощи цикла показать на экран календарь текущего месяца." <<endl;
	cout << "4. Выход." <<endl;
	cout << "Введите номер задания : "<<endl;
	cin >> zadan;
	switch(zadan)
	{
	case 1:
		for(int i=1;i<101;i++)
		{
			for(int j=2;j<101;j++)
			{
				/*if (i%j==0 && i!=j)
					{
					cout << "непростое      " << i << "     " << j <<endl;
					break;
					}*/
				 if (i%j==0)
					{
						if (i!=j)
						{
							break;
						}
					cout << "простое   " << i/* << "   "<< j */<< endl;
					break;
					}
			}
		}
		goto Start;
		break;
	case 2:
		cout << "Введите ширину фигуры : ";
		cin >> a;
		cout << endl;
		cout << "Введите высоту фигуры : ";
		cin >> b;
		cout << endl;
		for (i=1; i<=a; i++)
			{
				cout << '*';
			}
		cout << endl;
			for(t=1; t<=b-2; t++)
			{
				cout << '*';
				for(j=1; j<=(a-2); j++)
						{
							cout << '/';
						}
				cout << '*';
				cout << endl;
			}
		for (i=1; i<=a; i++)
			{
				cout << '*';
			}
		cout << endl;
		goto Start;
		break;
	case 3:
	cout<<"Пн"<<setw(3)<<"Вт"<<setw(3)<<"Ср"<<setw(3)<<"Чт"<<setw(3)<<"Пт"<<setw(3)<<"Сб"<<setw(3)<<"Вс"<<setw(3)<<endl;
	for (int i=1; i<30;)
	{
		for(int j=1; j<=7 && i<=31; j++, i++)
		{
			cout<<i<<setw(3);
		}
		cout<<endl;
	}
		goto Start;
		break;
	case 4:
		break;
	}
	return 0;
}

