#include <stdio.h>
int main()
{
    int t,j=1;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0,n,i,x;
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&x);
            if(x>0)
            {
                sum=sum+x;
            }
        }
        if(sum>=0)
        {
            printf("Case %d: %d\n",j,sum);
            j++;
        }
    }
    return 0;
}
