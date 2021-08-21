#include<stdio.h>
int main()
{
    int i,j,a[100],n,temp;
    printf("enter the elements of the array \n");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp  = a[i];
                a[i]  = a[j];
                a[j]  = temp;
            }
        }
    }
    printf("the resulting array is \n");
    for(i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
        printf(" \n ");

    }
    return 0;
}