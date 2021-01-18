#include<stdio.h>
int largest(int input)
{
    int max;
    int n;
    while(input)
    {
        n=input%10;
        input=input/10;
        if(n>max)
            max=n;
    }
     return max;

}
int smallest(int input)
{
    int min;
    int m;
    min=9999;
    while(input)
    {
        m=input%10;
        input=input/10;
        if(m<min)
            min=m;
    }
     return min;

}
int main()
{
    int input1,input2,input3;
    int e1,e2,e3,e4,e5,e6;
    int maxsum,minsum;
    int output;
    output=0;
    minsum=0;
    maxsum=0;
    scanf("%d%d%d",&input1,&input2,&input3);
    e1=largest(input1);
    e2=largest(input2);
    e3=largest(input3);
    e4=smallest(input1);
    e5=smallest(input2);
    e6=smallest(input3);
    maxsum=e1+e2+e3;
    minsum=e4+e5+e6;
    output=minsum-maxsum;
    printf("%d",output);
}
