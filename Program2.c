#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);//input the value of n from user
int sum=(n*(n+1))/2;//calculating the sum
printf("The sum of first n natural numbers: ");
printf("%d",sum);
}

