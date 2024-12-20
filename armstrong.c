#include<stdio.h>
void main ()
{
    int num,rnum,cnum,r,sum=0;
     
     printf("\n enter a number for check armstrong or not");
     scanf("%d",&num);

     cnum=num;

     while (num>0)
     {
        r=num%10;
        num=num/10;
        sum=sum+r*r*r;
     }
      if (cnum==sum)
        printf("%d is armstrong number",cnum);
        else
            printf("%d is not armstrong number",cnum);

}