#include<stdio.h>
void main()
{
    int num,i,logic;

    printf("\n prime number between 50 to 100");
     
     for ( num= 50; num <=100; num++)
     {
        logic=1;
        for ( i = 2; i < num; i++)
        {
            if(num%i==0)
            {
                logic=0;
                break;
            }
        }
       if(logic==1)
        printf("\n %d is prime number",num);

     }
     
}