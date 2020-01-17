#include<iostream>
#include<ctime>
using namespace std;   

void FillArray( int* const arr,const int size,int diap=10)    /* Функция по вводу одномерного динамического массива*/
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % diap;
	}

}
void ShowArray(int* const arr, const int size)               //Функция по выводу одномерного динамического массива
{
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << "\t";

	}


}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");     //Функции по вводу и выводу одномерного динамического массива
	int size;
	cout << "Vvedite razmer Massiva: ";
	cin >> size;
	int *arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	delete[]arr;

}