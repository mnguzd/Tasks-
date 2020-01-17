#include<iostream>
using namespace std;


int main()      // Написать программу, которая выводит на экран прямоугольник символом *. 
                // Высота и ширина задаётся пользователем.
{
	setlocale(LC_ALL, "Rus");
	int height, width; char s;
	cout << "Введите желаемый символ: ";
	cin >> s;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;
	cout << "Введите высоту прямоугольника: ";
	cin >> height;
	
	while (height>0)
	{
	
	for (int i = 0; i < width; i++)
	{
		
		if (i == (width-1)) {
			cout << s << endl;

		}
		else {
         cout << s;

		}
	}

	height--;
    }

	system("pause");
}