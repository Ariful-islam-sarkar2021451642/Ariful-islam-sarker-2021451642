#include <stdio.h>
int main()
{
    int i,n,sum=0;
	float avg;
	printf("Input the 5 numbers : \n");
	for (i=1;i<=5;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/5.0;
	printf("The sum of 5 no is : %d\nThe Average is : %f\n",sum,avg);

}
