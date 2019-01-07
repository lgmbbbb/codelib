/*#include<stdio.h>

void main()
{
	int size,i,x,y;
	int vertical[101] = {0},horizontal[101] = {0};
	int segment[2] = { 0,0 };
	scanf_s("%d", &size);
	
	for (i = 0; i < size; i++)
	{
		scanf_s("%d%d", &x, &y);
		horizontal[x]++;
		vertical[y]++;
	}

	for (i = 0; i < 101; i++)
	{
		if (vertical[i])
		{
			segment[0]++;
		}
		if (horizontal[i])
		{
			segment[1]++;
		}
	}
	printf("%d\n", segment[0] < segment[1] ? segment[0] : segment[1]);

}*/
