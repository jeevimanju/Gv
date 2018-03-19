#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,n,c=0;
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            	c=1;
            }
        }
    }
    if(c==1)
    {
    	printf("no");
    }
    else
    {
    	printf("yes");
    }
return 0;
}
