#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main()
{   system ("color 0a");
	setlocale (LC_ALL, "rus");
	int sum=0, zadan, max=0;
	const int	n=4;
   	int mr[3][4]; 
	Start:
	cout << "1. Дан двухмерный массив размерностью 3X4. Необходимо найти колличество" <<endl;
	cout << "элементов значение которых равно нулю." <<endl;
	cout << "2. Дана квадратная матрица порядка n (n строк, n столбцов). Найти наибольшее" <<endl;
	cout << "из значений элементов, расположенных в тёмно-синих частях матриц." <<endl;
	cout << "Все массивы в данном домашнем задании заполняются случайным образом." <<endl;
	cout << "3. Выход." <<endl;
	cout << "Введите номер задания : "<<endl;
	cin >> zadan;
	switch(zadan)
	{
	case 1:
		for(int i=0; i<3; i++)
			{
			for(int j=0; j<4;j++)
				{
				mr[i][j]=rand()%10;
				if (mr[i][j]==0)
					{
         			   sum+=1;
					}
      			cout<< setw(5) << mr[i][j];
       			}
		cout<<"\n\n";
        }
   		cout << sum <<" - количество нулей в матрице" << endl;
		goto Start;
		break;
	case 2:
		/*cout << "Введите количество строк :";
		cin >> n;*/
		cout << endl;
		int mb[n][n];
		for(int i=0; i<n; i++)
			{
			for(int j=0; j<n;j++)
				{
				mb[i][j]=rand()%20;
				if ((i+j)%2!=0)
					{
         			   if (mb[i][j]>max)
					   {
					  		 mb[i][j]=max;
					   }
					}
				cout << setw(5) << mb[i][j];
				}
			cout << endl;
        }
		cout << max << " - наибольшее из значений элементов, расположенных в тёмно-синих частях матриц." << endl;
   		goto Start;
		break;
	case 3:
		break;
	}
	return 0;
}

