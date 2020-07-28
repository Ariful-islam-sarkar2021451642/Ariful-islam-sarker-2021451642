#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%7==0)
        printf("%d is multiple by 7");
    else
        printf("%d is not multiple by 7");
    return 0;
}
