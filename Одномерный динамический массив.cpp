#include<iostream>
#include<ctime>
using namespace std;   

int main()      
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");     //Одномерный динамический массив
	int size;
	cout << "VVedite razmer Massiva: ";
	cin >> size;
	int *Arr = new int[size];
	for ( int i = 0; i <size; i++)
	{
		Arr[i] = rand() % 40;

	}
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << endl;
	}
	delete[]Arr;
}