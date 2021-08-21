#include<stdio.h>
#include<conio.h>

int main()
{
    int movie_rating[3][4],i=0,j=0;

    for(i=0;i<3;i++)
    {
        printf("\nnow entering the reviews to reviwer  %d :",i+1);

        for(j=0;j<4;j++)
        {
            printf("\nenter the ratings of the movie  %d :",j+1);

            scanf("%d",&movie_rating[i][j]);


        }
    }
    printf("\n now printing the ratings\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ", movie_rating[i][j]);

        }

        printf("\n");

    }

    getch();
    return 0;
    
}