#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b values: ");
    scanf("%d %d",&a,&b);
    printf("\nValues of a and b before swapping : %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues of a and b after swapping : %d %d",a,b);
    return 0;
}
