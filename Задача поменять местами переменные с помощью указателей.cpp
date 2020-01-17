#include<iostream>
using namespace std;     
                       //Напишите функцию, меняющую местами значения переменных с помощью указателей.

template<class T> 
T SWAP(T *pa, T *pb){
	int c = *pa;
	*pa = *pb;
	*pb = c;
	return 0;
}

int main()      
{
	setlocale(LC_ALL, "Rus");
	int a = 20, b = 14;
	cout << a << "\t" << b << endl;
	cout << "===========================" << endl;
	cout << SWAP(&a, &b) << endl;
	cout << "==========================="<< endl;
	cout << a << "\t" << b << endl;
	

}