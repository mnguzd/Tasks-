#include<iostream>
#include<ctime>
using namespace std;     //Заполнить массив рандмными неповторяющимися числам.
int main()      
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	const int SIZE = 10; int RandomNumber; bool gg = true; int sum = 1;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		gg = true;
		RandomNumber = rand() % 20;             //Rand присваивается значение 10 раз
    	while (gg) {
		for (int i = 0; i < SIZE; i++)
          	if (RandomNumber==arr[i])
				{
					RandomNumber = rand() % 20;
					sum++;
				}
		if (sum == 0) 
			gg = false;
		else
			sum = 0;
		}
		arr[i] = RandomNumber;																						
	 }
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << endl;
}