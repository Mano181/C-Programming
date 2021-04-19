#include<stdio.h>
int main()
{
    int row,col,n,spc;
    n=5;
    int val;
    int val1;
    for(row=1;row<=n;row++)
    {
        val1=row;
        val=0;
        for(spc=1;spc<=n-row;spc++)
            printf(" ");
        for(col=1;col<=(2*row)-1;col++)
        {
            if(col<=row)
                printf("%d",--val1);
            else
                printf("%d" ,++val);
        }
        printf("\n");
    }
}
