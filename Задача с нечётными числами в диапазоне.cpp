#include<iostream>
using namespace std;
//Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователем.

int main()
{
	setlocale(LC_ALL, "Rus");
	int sum=0, number1, number2,n1,n2;
	cout << "Введите первое число диапазона: ";
	cin >> number1;
	cout << "Введите второе число диапазона: ";
	cin >> number2;
	cout << "Сумма нечётных чисел в диапазоне от " << number1 << " до " << number2 << " = ";
	if (number1<number2)                 //Если первое число меньше второго, например 2<9
	{
		while (number1<=number2)
		{
			if ((number1%2)!=0)
			{
				sum += number1;
			}
			number1++;
		}

	}
	else if (number1>number2) {        //Если первое число больше второго, например 9>2

		while (number1>=number2)
		{
			if ((number1%2)!=0)
			{
				sum += number1;
			}
			number1--;
		}

	}
	else
	{
		if ((number1%2)!=0)
		{
			sum += number1;
		}

	}
	cout << sum << endl;
	cout << "Спасибо!" << endl;
	
}