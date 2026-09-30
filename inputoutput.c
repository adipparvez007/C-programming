#include<stdio.h>
int main()
{
int a,b,sum,sub,avg;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
 sum=a+b;
 sub=a-b;
 avg=(a+b)/2;
printf("Sum of two numbers: %d\n", sum);
printf("Difference of two numbers: %d\n", sub);
printf("Average of two numbers: %d\n", avg);
    return 0;
}