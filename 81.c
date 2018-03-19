#include <stdio.h>
int main()
{
	int n,a[40],b[67],i,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c=a[i]-b[i];
		printf("%d\n",c);
	}
	return 0;
}
