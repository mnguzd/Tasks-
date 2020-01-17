#include<iostream>
using namespace std;
//Это комментарий!

int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y; int op;
	cout << "Enter 1-st number: ";
	cin >> x;
	cout << "Enter 2-nd number: ";
	cin >> y;
	cout << "Enter number of the operation"<<endl;
	cout << "1) +" << endl;
	cout << "2) -" << endl;
	cout << "3) *" << endl;
	cout << "4) /" << endl;
	cout << "5) %" << endl;
	cout << "Number of operation: "; cin >> op; 
	switch (op) {

	case 1:cout << x << "+" << y << "=" << x + y << endl;
		break;

	case 2:cout << x << "-" << y << "=" << x - y << endl;
		break;

	case 3:cout << x << "*" << y << "=" << x * y << endl;
		break;

	case 4:
		if (y == 0) {
			cout << "Нельзя делить на 0!" << endl;

		}
		else {
			cout << "Делить нацело или дробные числа?" << endl;
			cout << "1)Нацело\n2)Дробные числа" << endl;
			int del;
			cout << "Номер: ";
			cin >> del;
			switch (del) {
			case 2:cout << x << "/" << y << "=" << double(x) / double(y) << endl;
				break;
			case 1:cout << x << "/" << y << "=" << x / y << endl;
				break;
			}
			
		}break;
	case 5:
		if (y == 0) {
			cout << "Нельзя делить на 0!" << endl;
		}
		else{
		cout << x << "%" << y << "=" << x % y << endl;
		}
		break;

	default:cout << "Enter 1-5 number, idiot!";
		break;

	}

	cout << "Calculator by Ch.Roman, Thanks for Using It!";

	
}