/*algorithm is : arr[mid]== search // element found at mid
arr[mid]>search then high = mid - 1
arr[mid]<search then low = mid +1
repeat till low<= high */


#include<stdio.h>
int main()
{
    int i,low,high,mid,search,n,arr[100];
    printf("enter the number of elements to be printed in the array \n");
    scanf("%d",&n);
    printf("the numbers are :");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter the number you want to search for : \n");
    scanf("%d",&search);

    low = 0;
    high = n-1;
    mid = (low + high)/2;

    while(low<=high)
    {
        if(arr[mid]==search)
        {
            printf("the element is found at %d",mid+1);
            break;

        }
        else if(arr[mid]<search)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
            
        }
        mid = (low +high)/2;
        
    }
    if(low>high)
    {
        printf("the element is not found in the array ");

    }
    return 0;

}
