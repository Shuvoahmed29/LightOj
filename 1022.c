#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j=1;
    scanf("%d",&t);
    while(t--)
    {
       double r,sum,area,sq,pi = 2*acos(0.0);
       scanf("%lf",&r);
       sq=(2*r)*(2*r);
       area=pow(r,2)*pi;
       sum=sq-area;
       printf("Case %d: %0.2lf\n",j,sum);
       j++;
    }
    return 0;
}
