#include<stdio.h>
int main()
{
    int i=0,location=-1,arr[10]={6,4,67,55,7,33,5,88,75,8,},n=0; /*location is set at -1 because if the element is not found then the pointer 
                                                               will show -1*/

    printf("enter the number which you want to find in the array\n");

    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            location=i+1;

            break;

        }
        
        
    }

    if(location==-1)
    {
        printf("\n sorry the element could not be found");

    }
    else
    {
        printf( "the element was found at %d",location);
    }

    return 0;

}