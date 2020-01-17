#include<iostream>
using namespace std;
int main() {
	const int n = 6;
	int arr[n],sum=0,min=INT_MAX,max=INT_MIN,proizv=1, index1,index2;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > 0)
			sum += arr[i];
		if (arr[i] > max){
			max = arr[i];
			index1 = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			index2 = i;
		}
	}
	if (index1<index2)
		for (int i=index1+1; i < index2; i++)
			proizv *= arr[i];
	else
		for (int i = index2 + 1; i < index1; i++)
			proizv *= arr[i];
	cout << "Summa polozh= " << sum << endl<<"Proizv= " << proizv << endl;
	//http://acmp.ru/index.asp?main=task&id_task=9
}