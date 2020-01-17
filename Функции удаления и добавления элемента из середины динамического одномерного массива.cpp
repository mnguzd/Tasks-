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
void push_face(int *&arr, int &size, const int value)              //Добавляет элемент в начало массива.
{
	int *newArray = new int[size+1];
	for (int i = 1,g=0; i < size+1,g<size+1; i++,g++)
	{
		newArray[i] = arr[g];
	}
	size++;
	newArray[0] = value;
	delete[]arr;
	arr = newArray;
	
}
void pop_face(int *&arr, int &size)                                //Удаляет элемент из начала массива.
{
	int *newArray = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		newArray[i] = arr[i + 1];


	}
	size--;
	delete[]arr;
	arr = newArray;
	
}

void pop_body(int *&arr,int &size,const int index)          //Удаляет элемент из середины массива.
{
	size--;
	int *newArray = new int[size];
	for (int i = 0; i < index; i++)
	{
		newArray[i] = arr[i];

	}
	for (int i = index; i < size; i++)
	{
		newArray[i] = arr[i+1];
	}
	delete[]arr;
	arr = newArray;
}

                                                             
void push_body(int *&arr, int &size, const int index, const int value)    //Добавляет элемент в середину массива.
{
	int *newArray = new int[size+1];
	for (int i = 0; i < index; i++)
	{
		newArray[i] = arr[i];
	}
	for (int i =index+1; i < size+1; i++)
	{
		newArray[i] = arr[i-1];
	}
	size++;
	newArray[index] = value;
	delete[]arr;
	arr = newArray;
	
}



int main()                       //Функции которые добавляют и удаляют элементы с начала массива.
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

	push_body(arr, size, 5, 68);
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}


	delete[]arr;

}