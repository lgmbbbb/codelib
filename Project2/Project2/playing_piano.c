//#include<stdio.h>
/*void main()
{
	int i,j, m,flag = 1;
	int add = 0, des = 0;
	int numbers = 1,flag_1 = 0,star=0,fault=0;
	unsigned int size;
	scanf_s("%d", &size);
	int *a = (int *)malloc(sizeof(int) *size);
	int *b = (int *)malloc(sizeof(int) *size);
	if ((a == 0) || (b == 0)) {
		printf("不能分配内存\n");
		return 0;
	}

	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
		if ((i > 0) && (i < size))
		{
			if (a[i-1] < a[i])
			{
				b[i] = 1;
				flag = 1;
			}
			else if (a[i-1] > a[i])
			{
				b[i] = -1;
				flag = 1;
			}
			else
			{
				if (flag == 1)
				{
					b[i] = 1;
					flag = 0;
				}
				else
				{
					b[i] = -1;
					flag = 1;
				}
			}
		}
	}
	b[0] = 0;
	for (i = 1; i < size; i++)
	{
		if (flag_1 == 0)
		{
			for (j = star+1; j < size; j++)
			{
				
				if (b[j + 1] != b[j])
				{
					flag_1 = 1;
					break;
				}
				else 
				{ 
					numbers++;
					if (b[star+1] == 1)
					{
						add = 1;
						des = 0;
					}
					else
					{
						des = 1;
						add = 0;
					}
				}
			}
		}
		if(flag_1 == 1)
		{
			printf("%d %d\n",i,numbers);
			if (numbers > 4)
			{
				printf("-1");
				fault = 1;
				break;
			}
			if (b[star] == 1)
			{
				b[star - 1] = 5 - numbers;	
				printf("(1) b[%d]=%d\n",star-1,b[star-1]);
			}
			if(b[star] == -1)
			{
				b[star - 1] = 1 + numbers;
				
				printf("(-1) b[%d]=%d\n", star - 1, b[star - 1]);
			}
			if (add == 1) { b[i] = b[i - 1] + 1; printf("b[%d]=%d\n", i,b[i]); }
			if (des == 1) { b[i] = b[i - 1] - 1; printf("b[%d]=%d\n", i, b[i]);
			}
		}
		if (i == star + numbers - 1)
		{
			flag_1 = 0;
			star = i+1;
			numbers = 1;
			add = 0;
			des = 0;
		}
	}	
	if (fault == 0)
	{
		for (m = 0; m < size; m++)
			printf("%d ", b[m]);
	}
		
	printf("\n");

}*/





