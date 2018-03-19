#include<stdio.h>
int main()
{
	int a,b,c;
	float s;
	scanf("%d%d",&a,&b);
	c=a/b;
	s=a%b;
	printf("\n%d division ",c);
	printf("\n%f modulo division ",s);
	return 0;
}
