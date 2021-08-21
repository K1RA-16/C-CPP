#include<stdio.h>

int add(int x,int y);
int add(int x,int y)
{
    int sum = x+y;
    printf("\nsum of the numbers %d and %d is = %d",x,y,sum);
  

    return 0;

}
int main()
{
    add(1234,2345);
    add(2345,3455);
    add(3456,4567);
     
    return 0;

}