// a peogrsamme to find factorial of a number using recursive function

#include<stdio.h>
int fact(int n);
int fact(int n)
{
    int result=0;
    if(n==0)
    {
        result = 1;

    }
    else
    {
        result = n * fact(n-1);

    }

    return result;

}
int main()
{
    int n=0,res=0;
    printf("\nenter till where you want the factorial\n");
    scanf("%d",&n);

    res = fact(n);
    printf("\n the result is %d",res);

    return 0;

}