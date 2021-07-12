#include<stdio.h>
int sum(int);
int main()
{
	int n,r,c;
	printf("Enter a number:");
	scanf("%d",&n);
	r=sum(n);
	printf("Sum of digits:%d",r);
	return 0;
}
int sum(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum(n / 10));
}
