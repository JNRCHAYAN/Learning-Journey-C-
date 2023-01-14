#include<stdio.h>

int main()
{
	int a,i,sum=1;
	scanf("%d",&a);

	for (i=1; i<a; i++)
	{
		sum =sum*(a-i);
		
	}
	
	printf("%d\n",sum*a);
	return 0;
}
