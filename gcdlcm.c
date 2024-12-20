#include<stdio.h>
int main()
{
    int n1,n2,i,gcd=1,lcm;

    printf("\n enter two number for gcd and lcm=");
    scanf("%d%d",&n1,&n2);

      // find gcd

      for ( i = 1; i <=n1 && i<=n2; i++)
      {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
      }

      // find lcm

      lcm=(n1*n2)/gcd;

      printf("\n gcd of %d and %d is =%d",n1,n2,gcd);
      printf("\n lcm of %d and %d is =%d ",n1,n2,lcm);
      
}