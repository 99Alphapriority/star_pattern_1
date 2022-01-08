#include<stdio.h>
int main()
{
	int a;
	for(int i=1;i<=4;i++)
	{
		a=65;
		for(int j=1;j<=7;j++)
		{
			if(j<=5-i || j>=3+i)
			{
				printf("%c",a);
				j<4?a++:a--;
			}
			else
			{
				printf(" ");
				if(j==4)
					a--;
			}
		}
		printf("\n");
	}
	return 0;
}


