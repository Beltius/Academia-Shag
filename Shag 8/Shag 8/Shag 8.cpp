#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
void perevod( unsigned int num, unsigned int base );
int main()
{   system ("color 0a");
	setlocale (LC_ALL, "rus");
	int zadan, nu, bas;
Start:
	cout << "1. Написать функцию, которая получает в качестве аргументов целое положительное число";
	cout << " и систему счисления, в которую это число должно переводится (системы счисления от";
	cout << " 2 до 36). Например, при переводе числа 27 в ";
	cout << " систему счисления 16 должно получиться 1B; 13 в 5-ю  - 23; 35 в 18-ю - 1H." << endl;
	cout << endl;
	cout << "2. Игра «кубики»." << endl;
	cout << "Условие:имеется два игральных кубика со значениями от 1 до 6. Игра  происходит с ";
	cout << "компьютером, кубики бросаются поочередно. Побеждает тот, у кого сумма выпавших очков ";
	cout << "по итогам пяти бросков больше. Предусмотрите возможность получения первого хода ";
	cout << "человеком или компьютером. Кубики отображаются с помощью символов. В конце игры необходимо";
	cout << " выводить среднюю сумму по броскам для обоих участников." << endl;
	cout << "3. Выход." <<endl;
	cout << "Введите номер задания : ";
	cin >> zadan;
	switch (zadan)
		{
			case 1:
				cout << "Введите целое положительное число : ";
				cin >> nu;
				cout << endl;
				cout << "Введите систему счисления : ";
				cin >> bas;
				cout << endl;
				perevod( nu, bas );
				goto Start;
				break;
			case 2:
				goto Start;
				break;
			case 3:
				break;
		}
	return 0;
}

void perevod( unsigned int num, unsigned int base )
{
	#define LENGTH ( 8 * sizeof( unsigned int ) ) /* размер с запасом */
	char str[ LENGTH + 1]; /* +1 для символа [[EOS]] */
	char *pstr = str + LENGTH - 1; /* начинаем заполнять цифрами с конца */
	str[ LENGTH ] = '\0'; /* добавляем EOS */
	if( num == 0 ) *pstr = '0'; /* если цикл не будет крутиться */
	else
		do
		{
			*pstr-- = '0' + num % base; /* заполняем цифрами, сдвигаясь влево */
			num /= base;
		}while( num > 0 );
	printf( "%s\n", pstr + 1 ); /* печатаем, начиная с 1го ненулевого символа */
	#undef LENGTH /* уже не нужно */
}
