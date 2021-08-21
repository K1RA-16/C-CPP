#include<stdio.h>
int main()
{
    int i=0,arr[6]={81,91,41,61,99,155},j=0,temp=0;


    printf("the unsorted array is : \n");

    for(i=0;i<6;i++)
    {
        printf("\n%d" ,arr[i]);
    }
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }

        }
    }
    printf(" \n\nnow the sorted array in asscending order is\n");

    for(i=0;i<6;i++)
    {
        printf("\n %d", arr[i]);

    }

    printf("\n\n now the sorted array in descending order is\n");

    for(i=5;i>=0;i--)

    {
        printf("\n %d", arr[i]);
    }

     return 0;

}