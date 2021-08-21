#include<stdio.h>

void swapx(int a, int b);
void swapx(int a,int b)
{
    int temp;
    temp = a;
    a= b;
    b= temp;

    printf("\n after swapping \n");
    printf("\n a = %d , b = %d", a,b);

}
int main()
{
    int x=10,y=20;
    swapx(x,y);
    printf("\n  x = %d , y = %d", x,y);

    return 0;
    
}