#include<stdio.h>
//find reverse of number
int main()
{
int n,r;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
printf("%d",r);
n=n/10;
}
}
