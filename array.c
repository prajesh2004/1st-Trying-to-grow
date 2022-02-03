#include<stdio.h>
int main()
{
    int a[5],i;
    for (i=0;i<=4;i++)
    {
        printf("Enter one by one");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("Result=\n%d",a[i]);
    }
}
