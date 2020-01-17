#include<stdio.h>
#include<fstream>
#include<iostream>
using namespace std;
int main() {
	bool otr;
	int sum=0;
	ifstream matrix;
	matrix.open("input.txt");
	int matrica[8][8];
	for (int i = 0; i < 8; i++)
		for (int g = 0; g < 8; g++)
			matrix >> matrica[i][g];
	matrix.close();
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			if (matrica[i][j] == matrica[j][i] && j == 7)
				cout << i << endl;
			else if (!(matrica[i][j] == matrica[j][i]))
				break;
	}//Сумма элементов в строках в которых есть хотя бы 1 отриц. элемент.
	for (int i = 0; i < 8; i++)
	{
		otr = false;
		for (int j = 0; j < 8; j++)
		{

			for (int g = 0; g < 8; g++)
				if (matrica[i][g]<0)
				{
					otr = true;
					break;
				}
			if (otr)
				sum += matrica[i][j];
		}
	}
	cout << "Sum= " << sum;
	return 0;
}
