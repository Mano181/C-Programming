#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    bool Arr[25]={true,false};
    int index,i;
    char str[]="The quick brown fox jumps over the little lazy dog";
    for(int itr=0;itr<strlen(str);itr++)
    {
        if('A'<=str[itr]&&str[itr]<='Z')
            index=str[i]-'A';
        else if('a'<=str[itr]&&str[itr]<='z')
        {
            int c=str[itr];
            index=c-'a';
        }
        else
            continue;
        Arr[index]=true;
    }
    for(int ind=0;ind<=25;ind++)
       if(Arr[ind]==false)
            return(printf("flase"));
    return(printf("True"));
}
