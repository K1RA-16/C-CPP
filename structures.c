// c programme to print the details of a student using structures
//3include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student
{
  char name[10];
  char mail[50];
  float marks [3];

}s1;

int main()
{
    int i = 0 ;
    
    
    printf("enter your name \n");
    gets(s1.name);

    printf("enter your mail \n");
    gets(s1.mail);

    for(i=0;i<3;i++)
    {
     printf("the marks of subject %d :", i+1);

     scanf("%f",&s1.marks[i]);
    }

    printf("\n name is : %s \n",s1.name);
    printf("\n his mail is : %s \n",s1.mail);

    for(i=0;i<3;i++)
    {
        printf("\nmarks of subject %d is %0.2f \n",i+1,s1.marks[i]);

    }
    getch();
    return 0;


}