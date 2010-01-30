#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <iostream>
using namespace std;
void hanoi_towers(int quantity, int from, int to, int buf_peg)	//quantity-число колец, 
																//from-начальное положение колец(1-3),
																//to-конечное положение колец(1-3)
{																//buf_peg - промежуточный колышек(1-3)
	if (quantity != 0)
	{
		hanoi_towers(quantity-1, from, buf_peg, to);
 
		cout << from << " -> " << to << endl;
 
		hanoi_towers(quantity-1, buf_peg, to, from);
	}
}
 
int main()
{
	system ("color 0a");
	setlocale (LC_ALL, "rus");
	int start_peg, destination_peg, buffer_peg, plate_quantity;
	cout << "Номер первого столбика:" << endl;
	cin  >> start_peg;
	cout << "Номер конечного столбика:" << endl;
	cin  >> destination_peg;
	cout << "Номер промежуточного столбика:" << endl;
	cin  >> buffer_peg;
	cout << "Количество дисков:" << endl;
	cin  >> plate_quantity;
 	hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
	cin  >> plate_quantity;
return 0;
}