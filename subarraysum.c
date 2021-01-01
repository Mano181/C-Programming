#include <stdio.h>
int main()
{
   int T;
   scanf("%d",&T);
   for(int itr=1;itr<=T;itr++)
   {
    int N,S;
    int arr[50],ind;
    int StartPointInd,EndPointInd,Sum;
    int flag;
    flag=0;
    StartPointInd=1;
    scanf("%d",&N);
    scanf("%d",&S);
    for(ind=1;ind<=N;ind++)
        scanf("%d",&arr[ind]);
    while(StartPointInd<=N)
    {
        Sum=0;
        for(EndPointInd=StartPointInd;EndPointInd<=N&&Sum<=S;EndPointInd++)
        {
                Sum=Sum+arr[EndPointInd];
                if(Sum==S)
                {
                printf("%d %d\n",StartPointInd,EndPointInd);
                flag=1;
                goto end;
                }
        }
        StartPointInd++;
    }

        end:
        if(flag==0)
            printf("-1");
   }

}//2 5 12 1 2 3 7 5 10 15 1 2 3 4 5 6 7 8 9 10
