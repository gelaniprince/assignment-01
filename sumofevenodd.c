#include<stdio.h>
void main()
{
    int i,sumodd=0,sumeven=0;

    // oddsum

    for ( i = 1; i <=200; i+=2)
    {
        sumodd=sumodd+i;
    }
      
      //evensum

    for ( i = 2; i <=200; i+=2)
    {
        sumeven=sumeven+i;
    }
    
printf("first 100 sum of odd number is %d",sumodd);
printf("first 100 sum of even number is %d",sumeven);


}