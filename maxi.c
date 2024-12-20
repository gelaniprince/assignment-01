#include<stdio.h>
int main()
{
 int onum,num,max=0,i;

 printf("how many number you want ?");
 scanf("%d",&onum);

 if(onum<=0)
 {
    printf("please enter a potive number");
 }
 else
 {
    for(i=1;i<=onum;i++)
    {
        printf("enter your %d number",i);
        scanf("%d",&num);
    
    if (num>max)
    {
        max=num;
    }
    }
    printf("maximum number is %d",max);


 }

}