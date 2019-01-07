/*#include<stdio.h>

void pages(int a, int b, int c);

void main()
{
	int a,b,c;
	scanf_s("%d%d%d", &a, &b, &c);
	pages(a, b, c);
}

void pages(int a,int b,int c)
{
	int i, m, n;
	if ((b - c > 1))
	{
		printf("<< ");
		m = b-c;
	}
	else
	{
		m = 1;
	}
	if ((b + c < a))
	{
		n = b + c;
	}
	else {
		n = a;
	}
	for (i = m; i <= n; i++)
	{
		if (i == b)
		{
			printf("(%d) ",i);
		}
		else
			printf("%d ",i);
	}
	if ((b + c < a))
		printf(">>\n");
}
*/

