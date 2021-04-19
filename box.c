#include<stdio.h>
int main()
{
    int row,col,n;
    n=5;
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            if(row==0||row==n-1)
                printf("%c ",col+97);
            else if(col==0||col==n-1)
                printf("%c ",row+97);
            else
                printf("  ");

        }
        printf("\n");

    }

}

