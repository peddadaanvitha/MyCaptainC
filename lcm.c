int lcm(int ,int);
int main()
{
	int a,b,r;
	printf("Input first number:");
	scanf("%d",&a);
	printf("Input second number:");
	scanf("%d",&b);
	r=lcm(a,b);
	printf("LCM of %d and %d = %d",a,b,r);
	return 0;
}
int lcm(int a,int b)
{
	static int c=1;
	if(c % a == 0 && c % b == 0)
	{
		return c;
	}
	else 
	{
		c++;
		lcm(a,b);
		return c;
	}	
}
