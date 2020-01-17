#include<stdio.h>
#include<conio.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i = 0; i <n; i++)
	{
		for (int g = 0; g <= i; g++)
		{
			printf("*");
		}
		printf("\n");


	}

	return 0;
}



VTOROI 
#include<stdio.h>
#include<conio.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){

		for (int g =n-i; g>0 ; g--)
		{
			printf("*");
		}

		printf("\n");

	}

	return 0;
}