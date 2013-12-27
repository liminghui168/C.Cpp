#include <stdio.h>
#include <string.h>
#define MAXN 10

int a[MAXN][MAXN];

int main()
{
    //蛇形填数
	int i,j,k,tot=0;
	scanf("%d",&k);
	memset(a,0,sizeof(a));
	tot = a[i=0][j=k-1] = 1;
	while(tot < k*k)
	{
		while(i+1<k && !a[i+1][j]) a[++i][j]=++tot;
		while(j-1>=0 && !a[i][j-1]) a[i][--j]=++tot;
		while(i-1>=0 && !a[i-1][j]) a[--i][j]=++tot;
		while(j+1<k && !a[i][j+1]) a[i][++j]=++tot;
	}

	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
