#include<iostream>
#include<ctime>
using namespace std;     //Найти минимальный элемент в массиве

int main()      
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE]; int sum = 0; int min = 20; int max = 0;
	bool wtf = true;
	while (wtf) {
			for (int i = 0; i < SIZE; i++)
				{
				arr[i] = rand() % 20;
				}
			for (int i = 0; i < SIZE; i++)
				{
					for (int g =i+1; g < SIZE; g++)
					{
						if (arr[i] == arr[g])
						{
							sum++;
						}
					}
				}
			if (sum == 0) {
				wtf = false;
			}
			else {
				sum = 0;
			}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i]<min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
	}
	cout << "MIN= " << min << endl;
	cout << "MAX= " << max << endl;
}