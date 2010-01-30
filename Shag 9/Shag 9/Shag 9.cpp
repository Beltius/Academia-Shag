#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
template <class T> T AverArr(T a[], int size)
{
   if(size<1) return (T) NULL;
   T tmp = NULL;
   for(int i=0; i<size; ++i)
      tmp += (T) a[i];
   return (T) tmp/size;   
}

double linur(double a, double b)
{
	return -b/a;
} 
template < int I > double X(double a, double b, double c) 
{ 
if(I==1) return (-b + sqrt(b*b-4*a*c))/2/a; 
else if(I==2) return (-b - sqrt(b*b-4*a*c))/2/a; 
else throw "Fuck you!"; 
}

int main()
{   system ("color 0a");
	setlocale (LC_ALL, "rus");
	int zadan, v;
	int in[]={1,2,3,4};
	double db[]={0.5, 1.5, 4.2, 0.75, 0.8}, a,b,c;
	char cim[]={'a', 'V', '5', 'p'};
Start:
	cout << "1. Написать шаблон функции для поиска среднего арифметического значений массива." <<endl;
	cout << "2. Написать перегруженные шаблоны функций для нахождения корней линейного";
	cout << "(a*x + b = 0) и квадратного (a*x^2+b*x + c = 0) уравнений. Замечание:";
	cout << "в функции передаются коэффициенты уравнений." <<endl;
	cout << "3. Написать функцию, которая принимает в качестве параметров вещественное число и";
	cout << " количество знаков после десятичной точки, которые должны остаться. Задачей функции";
	cout << "является округление вышеуказанного вещественного числа с заданной точностью." <<endl;
	cout << "4. Выход." <<endl;
	cout << "Введите номер задания : ";
	cin >> zadan;
	cout << endl;
	switch(zadan)
	{
	case 1:
		cout << endl;
		cout << AverArr(in, 4);
		cout << endl << AverArr(db, 5) << endl;
		cout << endl << AverArr(cim, 4) << endl;
		goto Start;
		break;
	case 2:
		cout << "Если уравнение линейное то введите 1, если квадратное то введите 2:";
		cin >> v;
		if (v==1)
			{ 
				cout << "Введите первый коэффициент :";
				cin >> a;
				cout << "Введите второй коэффициент :";
				cin >> b;
				cout << endl;
				cout << "Корень линейного уравнения будет равен :" << linur(a, b); 
				cout << endl;
			}
		else
			{
				cout << "Введите первый коэффициент :";
				cin >> a;
				cout << endl;
				cout << "Введите второй коэффициент :";
				cin >> b;
				cout << endl;
				cout << "Введите третий коэффициент :";
				cin >> c;
				cout << endl;
				double x1 = X< 1 >(a,b,c); 
				double x2 = X< 2 >(a,b,c);
				cout << "Первый корень линейного уравнения будет равен :" << x1 << endl;
				cout << "Второй корень линейного уравнения будет равен :" << x2 << endl;
				cout << endl;
			}
		goto Start;
		break;
	case 3:
		goto Start;
		break;
	case 4:
		break;
	}
	return 0;
}



