#include<stdio.h>
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=7;j++)
		{
			if(i<=4)
			{
				if(j>=5-i&&j<=3+i)
					printf("*");
				else 
					printf(" ");
			}
			else
			{
				if(j<=11-i&&j>=i-3)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
