/*insted of passing the values of variables, we pass
the adress of variable to the function.
using adresses we would have the access to the actual 
variable and hence we would be able to mannipulate them
in call by referance no new memory location(box)is created
the adress is passed to the new variables and they share 
the same memory location(box)
*/

#include<stdio.h>
void swapx(int *,int*);

void swapx(int*x,int*y) // the use of '*'is done as pointer is used to locate address
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\n after swapping");
    printf("\nx = %d , y = %d\n",*x ,*y);

}

int main()
{
    int a = 10,b = 20;
    swapx(&a,&b); //the use of an '&' is done as this is uded to pass referance
    printf("a = %d, b = %d\n",a,b);

    return 0;

     
}