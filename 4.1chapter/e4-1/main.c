#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",f(n)/f(m)*f(n-m));

    return 0;
}

int f(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        m*=i;
    }
    return m;
}
