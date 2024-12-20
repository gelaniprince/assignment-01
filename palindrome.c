#include<stdio.h>
void main()
{
    int num,cnum,rnum=0,r;

    printf("enter number for palindrome or not pelindrome=");
    scanf("%d",&num);

    cnum=num;

    //revers number

    while (num>0)
    {
        r=num%10;
        num=num/10;
        rnum=rnum*10+r;

    }
    
     // check

     if(cnum==rnum)
     printf("\n %d is palindrome number",cnum);
     else
     printf("\n %d is not palindrome number",cnum);

}