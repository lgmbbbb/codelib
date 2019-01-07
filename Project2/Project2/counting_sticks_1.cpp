/*#include <iostream>	
using namespace std;

int main()								
{											
	char a;	
	int A = 0, B = 0, C = 0, flag = 0;

	while(cin>>a)
	{
		if (a == '|'&&flag==0) {
			A++;
		}
		if (a == '+'){
			flag = 1;
		}
		if (flag == 1 && a == '|'){
			B++;
		}
		if (a == '='){
			flag = 2;
		}
		if (flag == 2 && a == '|'){
			C++;
		}
	}
	if (A + B == C) {
		goto LOOP;
	}
	else if (A + B + 1 == C - 1)
	{
			if (A > B) {
				B = B + 1;
			}
			else {
				A = A + 1;
			}
			C = C - 1;
	}
	else if (A + B - 1 == C + 1)
	{
		if (A > B) {
			A = A - 1;
		}
		else {
			B = B - 1;
		}
		C = C + 1;
	}
	else
	{
		cout<<"Impossible";
		flag = 4;
	}
	
	
LOOP:if (flag != 4) {
		for (int i = 0; i < A + B + C + 2; i++)
		{
			if (i == A)
			{
				cout<<'+';
			}
			else if(i == A + B + 1)
			{
				cout<<'=';
			}
			else
			{
				cout<<'|';
			}
		}
	}

	//cout << endl;
	
	return 0;
}*/

