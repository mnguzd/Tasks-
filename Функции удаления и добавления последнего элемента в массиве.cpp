#include<iostream>
#include<ctime>
using namespace std;   
void push_back(int *&arr,int &size, const int value)            //Добавляет элемент в конец массива.
{
	
	int *newArray = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;
	delete[]arr;
	arr = newArray;
	

}
void pop_back(int *&arr, int &size)                             //Удаляет элемент в конце массива.
{
	size--;
	int *newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	delete[]arr;
	arr = newArray;

}

int main()                       //Функция которая добавляет элемент массива в конец.
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int size;
	cout << "Vvedite kol-vo elementov massiva: ";
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	/////////////////////////////////////////////////////////////////////////////
	
	push_back(arr,size,5);


	/////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	pop_back(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}


	delete[]arr;

}