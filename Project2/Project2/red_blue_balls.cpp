/*#include<iostream>
#include<math.h>
using namespace std;
long long Pow(int x, int y);

int main() 
{
	int n,m=1;
	long long numbers = 1, sum_numbers = 0;
	char a[51];
	char Ball;
	cin >> n;
	while (n--)
	{
		cin >> Ball;
		a[m] = Ball;
		m++;
	}*/
	/*if (a[1] == 'B') {
		sum_numbers = 1;
	}
	for (int i = 2; i <= m - 1; i++) {
		if (a[i] == 'B')
		{
			for (int j = 2; j <= i; j++) {
				numbers = numbers + Pow(2,j-2);
			}
			sum_numbers = sum_numbers + numbers + 1;
			numbers = 0;
		}	
	}*/
	/*for (int i = 1; i <= m - 1; i++) {
		if (a[i] == 'B')
		{
			sum_numbers = sum_numbers + numbers;
		}
		numbers = numbers * 2;
	}


	cout <<sum_numbers; 
	return 0;
}


long long Pow(int x, int y)
{
	long long z = 1;
	for (int i = 1; i <= y; i++) {
		z = z * x;
	}
	return z;
}*/