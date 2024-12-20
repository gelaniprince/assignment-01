#include<stdio.h>
void main()
{
    int n,f=0,s=1,i,next;

    printf("\n enter number of trum:");
    scanf("%d",&n);

    if (n>=0)
    {
        printf("please, enter a positive number ");
    }
    if(n>f)
    {
        printf("%d",f);
    }

    if(n>s)
    {
        printf("%d",s);
    }

    for ( i = 3; i<= n; i++)
    {
        next=f+s;
        f=s;
        s=next;
        printf("%d",next);
    }
    printf("\n");
}

