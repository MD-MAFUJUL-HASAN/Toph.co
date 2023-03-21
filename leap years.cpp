#include<stdio.h>

int main()
{
    int Y;
    scanf("%d",&Y);
    if((Y % 4 == 0) && (Y % 100 != 0))
        printf("Yes\n");
    else
        printf("No\n");
}
