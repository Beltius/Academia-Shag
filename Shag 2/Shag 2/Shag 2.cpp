#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main()
{
Start:
	setlocale(LC_ALL, "rus");
	system ("color 0a");
	int var;
	int a, i=0, sum=0;
	double b, c;
	char z;
	//system("cls");
	cout << "1. Напишите программу, проверяющую число, введенное с клавиатуры на четность." << endl;

	cout << "2. Дано натуральное число а (a<100). Напишите программу, выводящую на экран";
	cout << " количество цифр в этом числе и сумму этих цифр" << endl;
	cout << "3. Известно, что 1 дюйм равен 2.54 см. Разработать приложение, переводящие дюймы";
	cout << " в сантиметры и наоборот. Диалог с пользователем реализовать через систему меню." << endl;
	cout << "4. Напишите программу, реализующую популярную телевизионную игру \"Кто хочет cтать миллионером\"." << endl; 
	cout << "5. Выход" << endl;
	cin >> var;
	system("cls");
	switch(var)
	{
		case 1: 
			cout << "Ведите число : ";
			cin>>a;
			cout<<endl;
				if (a%2==0)
				{
					cout << "четное";
					cout<<endl;
				}
				else
				{
					cout << "нечетное";
					cout<<endl;
				}
		case 2:
			cout << "Ведите число : ";
			cin>>a;
			cout<<endl;
			if (a>9)
				{
					i = 2;
				}
  			else
				{
    				i = 1;
				}
			sum = a/10 + a%10;
 			cout <<"Сумма цифр :" << sum << endl;
			cout <<"Количество цифр :" << i << endl;
			goto Start;
		case 3:
			cout << "Чтобы перевести сантиметры в дюймы введите s" << endl;
			cout << "Чтобы перевести дюймы в сантиметры введите  d" << endl;
			cin>>z;
			system("cls");
			if ( z == 's')
			{
				cout << "Введите сантиметры: ";
				cin >> b;
				cout << b*2.54 << endl;
			}
			if ( z == 'd')
			{
				cout << "Введите дюймы: ";
				cin >> c;
				cout << c/2.54 << endl;
			}
			goto Start;
		case 4:
			cout << "Вопрос первый" << endl;
			cout << "Сколько будет 2+2?"<<endl;
			cout << "Варианты ответов:"<< endl;
			cout << "Вариант 1 :   10" << endl;
			cout << "Вариант 2 :   6" << endl;
			cout << "Вариант 3 :   4" << endl;
			cout << "Вариант 4 :   8" << endl;
			cin >> a;
			if (a==3)
			{
			cout << "Вопрос второй" << endl;
			cout << "Сколько будет 3+2?"<<endl;
			cout << "Варианты ответов:"<< endl;
			cout << "Вариант 1 :   10" << endl;
			cout << "Вариант 2 :   5" << endl;
			cout << "Вариант 3 :   4" << endl;
			cout << "Вариант 4 :   8" << endl;
			cin >> a;
				if (a==2)
					{
						cout << "Сколько будет 3+3?"<<endl;
						cout << "Варианты ответов:"<< endl;
						cout << "Вариант 1 :   10" << endl;
						cout << "Вариант 2 :   5" << endl;
						cout << "Вариант 3 :   4" << endl;
						cout << "Вариант 4 :   6" << endl;
						cin >> a;
						if (a==4)
						{
							cout << "Поздровляю!!!! Вы выйграли 1000000 $" << endl;
						}
						else
						{
							cout << "Вы проиграли." << endl;
						}
					}
				else
				{
				cout << "Вы проиграли." << endl;
				}
			}
			else
			{
			cout << "Вы проиграли." << endl;
			}
			goto Start;
		case 5:
			break;
	}
	return 0;
}