#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[100],n;
	printf("How many number : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int max=num[0];
	int min=num[0];
	for(int j=1;j<n;j++)
	{
		if (max<num[j])
		{
		max=num[j];
		}
		if(min>num[j]) 
		{
			min=num[j];
		}
		
	}
	printf("Max number = %d\n",max);
	printf("Minmum Numbwe = %d\n",min);

	return 0;
}
