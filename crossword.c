#include<stdio.h>
int main()
{
    int row,col,n;
    n=5;
    char str[]="program";
    for(row=0;str[row];row++)
    {
        for(col=0;str[col];col++)
        {

            if(row==col||row+col==n+1)
                printf("%c",str[row]);
            else
                printf(" ");
        }
        printf("\n");

    }

}
