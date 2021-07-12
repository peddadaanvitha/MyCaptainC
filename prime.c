#include<stdio.h>
int lcm(int ,int);
int main()
{
	int n,r,c;
	printf("Enter a number:");
	scanf("%d",&n);
	r=prime(n);
	if(r==2)
		printf(" %d is a prime number",n);
	else
		printf("%d is not a prime number",n);
	return 0;
}
int prime(int n)
{
	int c=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	return c;
}
