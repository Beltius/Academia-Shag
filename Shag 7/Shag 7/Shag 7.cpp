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
   	int mr[3][4]; 
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4;j++)
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