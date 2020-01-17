#include<iostream>
#include<ctime>
using namespace std;   

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");     //Двумерный динамический массив
	int ROWS, COLS;
	cout << "VVedite kol-vo strok massiva: ";
	cin >> ROWS;
	cout << "Vvedite kol-vo stolbikov massiva: ";
	cin >> COLS;
	int **Arr = new int*[ROWS];
	for (int i = 0; i < ROWS; i++)
	{
		Arr[i] = new int[COLS];

	}
	for (int i = 0; i < ROWS; i++)                 //ZAPOLNENIE MASSIVA
	{
		for (int g = 0; g < COLS; g++)
		{
			Arr[i][g] = rand() % 30;
		}
	}
	for (int i = 0; i < ROWS; i++)                 //VIVOD MASSIVA
	{
		for (int g = 0; g < COLS; g++)
		{
			cout << Arr[i][g] << "\t";
		}
		cout << endl;
	}




	for (int i = 0; i < COLS; i++)          //UDALENIE ELEMENTOV
	{
		delete[]Arr[i];
	}
	delete[]Arr;

}