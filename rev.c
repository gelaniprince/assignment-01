#include<stdio.h>
void main()
{
    int num,rnum=0,i,r;

    printf("\nenter a number =");
    scanf("%d",&num);
    while (num>0)
    {
        r=num%10;
        num=num/10;
        rnum=rnum*10+r;
        
    }
    printf("revers number is =%d",rnum);
}

