#include <stdio.h>

int main( void )
{
   int i,j,k;
   int n;

   printf("請輸入大小:\n");
   scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	printf(" ");
	for(k=1;k<=n;k++)

	printf("*");
	printf("\n");
}
   return 0;
}
