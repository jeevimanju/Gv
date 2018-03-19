#include <stdio.h>
int main()
{
    int i,c,d,gcd,lcm;
    scanf("%d %d",&c,&d);
    for(i=1;i<=c&&i<=d;i++)
    {
        if((c%i==0) && (d%i==0))
        gcd=i;
    }
    lcm=((c*d)/gcd);
    printf("%d",lcm);
    return 0;
}
