// TwoDeeArrayPractice1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char TDArray[5][7] = {
		{ ' ','/','\\','_','/','\\',' ' },{ '/',' ','D',' ', 'D',' ','\\' },
	{ '(','=','=','O','=','=',')' },{ '\\',' ',' ','~', ' ',' ','/' },
	{ ' ','-','-','-', '-','-',' ' } };

	// finish – display TD array to console
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << TDArray[i][j];
		}
		cout << endl;
	}
	return 0;
}