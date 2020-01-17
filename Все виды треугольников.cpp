#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	int n;
	ofstream fout;
	ifstream fin;
	fin.open("Input.txt");
	fin >> n;
	fin.close();
	fout.open("Output.txt");
	for (int i = 0; i < n; i++)
	{
		for (int g = 0; g <=i; g++)
		{
			fout << "*";
		}
		fout << endl;
	}
	fout << endl<< "-------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int g = 0; g < n-i-1; g++)
		{
			fout << " ";
		}
		for (int j = 0; j <=i; j++)
		{
			fout << "*";
		}
		fout << endl;

	}
	fout << endl << "-------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int g = 0; g < n-i; g++)
		{
			fout << "*";
		}
		fout << endl;

	}
	fout << endl << "-------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int g = 0; g < i; g++)
		{
			fout << " ";
		}
		for (int j = 0; j < n-i; j++)
		{
			fout << "*";
		}

		fout << endl;

	}
	fout << endl << "-------------------------------" << endl;
	for (int i = 0,kol=1; i < n; i++,kol++)
	{
		for (int g = 0; g < n-i-1; g++)
		{
			fout << " ";
		}
		for (int j = 0; j <i+kol; j++)
		{
			fout << "*";
		}
		fout << endl;
	}
	fout << endl << "-------------------------------" << endl;
	for (int i = 0,kol=1; i < n; i++,kol++)
	{
		for (int g = 0; g < i; g++)
		{
			fout << " ";
		}
		for (int j = 0; j < 2*n-i-kol; j++)
		{
			fout << "*";
		}

		fout << endl;
	}
	fout << endl << "-------------------------------" << endl;

	for (int i = 0, kol = 1; i < n; i++, kol++)
	{
		for (int g = 0; g < n - i - 1; g++)
		{
			fout << " ";
		}
		for (int j = 0; j < i + kol; j++)
		{

			if (j%2==0)
				fout << "*";
			else
				fout << "+";
		}
		fout << endl;
	}
	fout << endl << "-------------------------------" << endl;

	for (int i = 0, kol = 1; i < n; i++, kol++)
	{
		for (int g = 0; g < n - i - 1; g++)
		{
			fout << " ";
		}
		for (int j = 0; j < i + kol; j++)
		{

			if ((i+j)%2==0)
				fout << "*";
			else
				fout << "+";
		}
		fout << endl;
	}
	fout << endl << "-------------------------------" << endl;
	fout.close();

	return 0;
}
