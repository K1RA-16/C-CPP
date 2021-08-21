#include<stdio.h>
#include<string.h>
#include<conio.h>

struct employee
{
char name[30];
int emp_id;
int exp;
float sal;

};

int main()
{   int i;
    struct employee e[5];
    for(i=0;i<5;i++)
    {
        printf("\n enter the name of the employee %d \n",i+1);
        scanf("%s",e[i].name);

        printf("\n enter the employee id of employee %d\n",i+1);
        scanf("%d",&e[i].emp_id);

        printf("\nenter the years of experience of employee %d \n",i+1);
        scanf("%d",&e[i].exp);

        printf("\nenter the salary of the employee %d \n",i+1);
        scanf("%f",&e[i].sal);


    }
    for(i=0;i<5;i++)
    {
        printf("\nEmployee %d name is %s \n",i+1,e[i].name);
        printf("\nID of employee %d is %d \n",i+1,e[i].emp_id);
        printf("\nyears of experience of employee %d is %d\n",i+1,e[i].exp);
        printf("\nthe salary of the employee %d is %0.2f\n",i+1,e[i].sal);
    }
    getch();
    return 0;
    
}
