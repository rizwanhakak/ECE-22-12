#include <stdio.h>
int main()
{
    int a[100],i,sum=0;
	float avg;
	printf("Input 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&a[i]);
		sum +=a[i];
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);

}
