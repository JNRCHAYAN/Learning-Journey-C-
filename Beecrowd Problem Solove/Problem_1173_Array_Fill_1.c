#include<stdio.h>

int main()
{
	int j,i,a[10];

	scanf("%d",&j);
	a[0]=j;
	int k=j;

	for (i=1;i<10;i++)
	{
		k=k*2;
		a[i]=k;

	}
	for (int l=0;l<10;l++)
	{
		printf("N[%d] = %d\n",l,a[l]);
	}


}