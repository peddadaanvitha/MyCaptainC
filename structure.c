#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int id;
    int age;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=3;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("EMPLOYEE DETAILS\n");
 
    for(i=0; i<n; i++)
	{
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
        
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
