#include<stdio.h>
int main()
{
    int temp,arr[100],ind, itr,n;
    scanf("%d",&n);
    for(ind=0;ind<n;ind++)
        scanf("%d",&arr[ind]);
    int largest=arr[n-1];
    arr[n]=-1;
    arr[n-1]=largest;
    for(itr=n-2;itr>=0;itr--)
    {
        temp=arr[itr];
        if(arr[itr]>largest)
        {
            largest=arr[itr];
            arr[itr]=temp;
        }
        arr[itr]=largest;

    }
    for(int inc=1;inc<=n;inc++)
        printf("%d",arr[inc]);


}
