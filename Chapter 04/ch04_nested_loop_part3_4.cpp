#include<stdio.h>

int main()
{
	int batas;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	for (int b = 1; b <= batas; b++)
	{
		for (int k = 1; k <= batas; k++)
		{
			if(b==1 || k==batas || k==b)
				printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}
