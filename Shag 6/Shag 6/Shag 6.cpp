#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
using namespace std;
int main()
{
	const int M=1000;
	int numb[M]={0};   //массив для записи, какой элемент сколько раз встретится...
	system ("color 0a");
	int zadan, pmas[10]={0,0,0,0,0,0,0,0,0,0}, mas[10], chet=0, nechet=0, little=100000000, cnt=0, kol=0, smas[10];
	setlocale (LC_ALL, "rus");
	cout << "Введите 10 чисел: " << endl;
	for(int i=0; i<(sizeof(mas)/sizeof(int)); i++)
	{
		cin >> mas[i];
	}
Start:
	cout << "Входными данными во всех описанных ниже заданиях является массив из 10 элементов, заполненный пользователем с клавиатуры." <<endl;
	cout << "1. Написать программу, которая выводит содержимое массива наоборот." <<endl;
	cout << "Пример: массив 23 11 6 превращается в 6 23 11." <<endl;
	cout << "2. Написать программу, которая находит сумму четных и сумму нечетных элементов массива." <<endl;
	cout << "3. Написать программу, которая находит в массиве значения, повторяющиеся два и более раз, и показывает их на экран." <<endl;
	cout << "4. Написать программу, которая находит в массиве самое маленькое нечетное число и показывает его на экран." <<endl;
	cout << "5. Выход." <<endl;
	cout << "Введите номер задания : "<<endl;
	cin >> zadan;
	switch(zadan)
	{
	case 1:
			for (int i=9; i>=0;i--)
			{
			cout << mas[i] << endl;
			}
			cout << endl;
		goto Start;
		break;
	case 2:
		for (int i=9; i>=0;i--)
			{
				if (mas[i]%2==0)
				{
				chet=chet+mas[i];
				}
				if (mas[i]%2!=0)
				{
				nechet=nechet+mas[i];
				}
			}
			cout << endl;
			cout << chet << endl;
			cout << nechet << endl;
			cout << endl;
		goto Start;
		break;
	case 3:
		for(int i=9; i>=0;i--)
		{
			numb[ mas[i] ]++;
		}
		cout<<"числа: ";
 		for(int i=0;i<M;i++) 
			 {
				  if(numb[i]>1)
 				   cout<<i<<" ";
			 }
		goto Start;
		break;
	case 4:
		for (int i=9; i>=0;i--)
			{
				if (mas[i]%2!=0)
				{
					if (little>mas[i])
						{
							little=mas[i];
						}
				}
			}
			cout << endl;
			cout << little << endl;
			cout << endl;
		goto Start;
		break;
	case 5:
		break;
	}
	return 0;
}