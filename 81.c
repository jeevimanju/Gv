#include <stdio.h>
int main()
{
	int n,a[40],b[67],i,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		s=a[i]-b[i];
		printf("%d\n",s);
	}
	return 0;
}
