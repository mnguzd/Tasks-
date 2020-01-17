#include<iostream>
using namespace std;     //ДЗ написать ШАБЛОННУЮ функцию которая меняет местами значения 2-х переменных с помощью ССЫЛОК.
template<class T>
T SWAP(T &a, T&b) {
	int c = a;
	a = b;
	b = c;
	return 0;
}

int main()      
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "Введите значеие двух переменных." << endl;
	cin >> a >> b;
	SWAP(a, b);
	cout << "a= " << a << "\tb= " << b << endl;
	
}