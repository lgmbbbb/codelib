/*#include <iostream>	
using namespace std;

int main() {

	int n;
	double segment = 0.0;
	int length = 0;

	cin >> n;
	int a[101], b[101];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	segment = double(a[1]) - 0.5;

	//cout << segment << endl;

	for (int i = 1; i <= b[1] - a[1]; i++) {
		segment = segment + 1;
		for (int j = 2; j <= n; j++)
		{
			if (segment > double(a[j]) && segment<double(b[j]))
			{
				length++;
				break;
			}
		}	
	}
	cout << b[1] - a[1] - length << endl;
	return 0;
}*/