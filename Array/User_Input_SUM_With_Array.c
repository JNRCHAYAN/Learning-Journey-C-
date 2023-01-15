#include<stdio.h>

int main()
{
   int a[1],sum=0;

   for(int i=0; i<10;i++)
   {
	scanf("%d",&a[i]);
   } 
	
   for (int j=0 ;j<10;j++)
   {
	sum=sum+a[j];
   }
   printf("%d",sum);

   return 0;
	

}