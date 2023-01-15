#include<stdio.h>

int main()
{
	int n,a[47];
	scanf("%d",&n);

	a[0]=0;
	a[1]=1;

	for (int i=2;i<n;i++)
	{
		a[i]=a[i-1] + a[i-2];
	}
	
		printf("%d %d",a[0],a[1]);
	for(int j=2; j<n;j++)
	{
		printf(" %d",a[j]);
	}
	printf("\n");
	return 0;
}
