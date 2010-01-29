#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main()
{   
    int sum=0;
    srand((unsigned)time(NULL)); 
	const int row=3; 
	const int col=4;
	int mr[row][col]; 
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col;j++)
		{
			mr[i][j]=rand()%10;
			
        if (mr[i][j]==0)
        {
            sum+=1;
        }
        cout<<mr[i][j]<<" ";
        }
		cout<<"\n\n";
        }
    cout<<sum<<" zeros in array\n\n";
    system ("PAUSE");
    return 0;
}