#include <stdio.h>
int main()
{
   int j,n;
   printf("multiplication table of number : ");
   scanf("%d",&n);
   printf("\n");
   for(j=1;j<=10;j++)
   {
     printf("%d X %d = %d \n",n,j,n*j);
   }
}
