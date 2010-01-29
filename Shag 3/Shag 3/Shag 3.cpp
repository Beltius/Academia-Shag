#include "stdafx.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	system ("color 0a");
	setlocale (LC_ALL, "rus");
	int m, n, i, v, colsimvol, napravlenie, fact;
Start:
	cout << "Добрый день" << endl;
	cout << "1. Разработать программу, которая выводит на экран горизонтальную линию из символов.";
	cout << "Число символов, какой использовать символ, и какая будет линия - вертикальная,";
	cout << "или горизонтальная - указывает пользователь." << endl;
	cout << "2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне,";
	cout << "указанном пользователе." << endl;
	cout << "3. Дано натуральное число n. Написать программу, которая вычисляет факториал ";
	cout << "неотрицательных целых чисел n (т.е. число целое и больше 0)." << endl;
	cout << "Формула вычисления факториала приведена ниже." << endl;
	cout << "n! = 1*2*3*....*n, (формула вычисления факториала числа n)" << endl;
	cout << "0! = 1 (факториал 0 равен 1 (по определению факториала))" << endl;
	cout << "4. Выход." << endl;
	cin >> v;
		switch(v)
		{
		case 1:
			cout << "Введите количество символов : ";
			cin >> colsimvol;
			cout << endl;
			cout << "Введите направление ( 1 - горизонтально, 2 - вертикально ) : ";
			cin >> napravlenie;
			cout << endl;
			if ( napravlenie == 1)
			{
				for (i=0; i<=colsimvol; i++)
				{
					cout<< "*";				
				}
			}
			if ( napravlenie == 2)
			{
				for (i=0; i<=colsimvol; i++)
				{
					cout<< '\t' <<"*"<< endl;				
				}
			}
			goto Start;
			break;
		case 2:
			v = 0; 
			cout << "Введите диапазон целых чисел: ";
			int mas[10];
			for (i=0; i<9; i++)
			{
				cin >> m; 
				mas[i+1]=m;
			}
			for (i=0; i<9; i++)
				{
					if (mas[i]%2!=0)
						{
							v=v+mas[i];
						}
				}
			cout << endl;
			cout << v << endl;
			goto Start;
			break;
		case 3:
			fact = 1;
			cout << "Введите число для вычисления факториала: ";
			cin >> n;
			cout << endl;
			if (n<0)
				{
					cout << "Число должно быть больше 0" << endl;
				}
			else if (n==0)
				{
					cout << "Факториал числа равен : 1" << endl;
				}
			else {
				for (i=1; i<=n; i++)
					{
						fact=fact*i;
					}
				cout << "Факториал числа равен :" << fact << endl;
			}
			goto Start;
			break;
		case 4:
			break;
		}
//_sleep(5000);
return 0; 
}

