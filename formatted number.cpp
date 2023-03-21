#include<stdio.h>
#include<string.h>

int main()
{
    char A[20];
    int i;
    gets(A);
    int k=0,j=0;
    int new[30];
    for(i=strlen(A)-1;i>=0;i--)
    {
        if(j==3)
        {
            new[k++]=',';
            new[k++]=A[i];
            j=0;
        }
        else
            new[k++]=A[i];
     j++;

    }

    for(i=k-1;i>=0;i--)
    {
        printf("%c",new[i]);
    }
}
