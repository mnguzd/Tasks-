#include<iostream>
#include<ctime>
using namespace std;   
void sym_number(char str[]) 
{
	int i = 0; int kol = 0;
	while (true) {
		if (str[i] != '\0') {
			kol++;
			i++;
		}
		else
		{
			break;
		}

	}
	cout << kol << endl;


}

int main()                              //Написать свою реализацию функции strlen
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	char string1[] = "Hello World";
	sym_number(string1);
}