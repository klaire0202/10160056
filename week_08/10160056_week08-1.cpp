#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s=0,now=1;
	for(int i=1;i<=n;i++)
	{
		now*=i;
		s+=now;
	}
	printf("%d",s);
}
