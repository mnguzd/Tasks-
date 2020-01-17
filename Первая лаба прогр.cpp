#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float a, b, c, Xn, Xk, Xd, F;
	setlocale(LC_ALL, "Rus");
	printf("Введите:\n");
	cout << "\ta = "; cin >> a;
	cout << "\tb = "; cin >> b;
	cout << "\tc = "; cin >> c;
	cout << "\tXn = "; cin >> Xn;
	cout << "\tXk = "; cin >> Xk;
	cout << "\tXd = "; cin >> Xd;
	for (float x=Xn; x<=Xk; x+=Xd)
	{
		if (x < 5 && c != 0)
			F = -a * (float)pow(x, 2) - b;
		else if (x > 5 && c == 0)
			F = (x - a) / x;
		else
			F = -x / c;

		if ((int(a) || int(b)) xor (int(a) || int(c)))
			cout << F << endl;

			cout << int(F) << endl;

	}
	return 0;
}
