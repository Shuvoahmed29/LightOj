#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int n,m,sum;
        cin>>n>>m;
        if(m>=n)
        {
            sum=((m-n)*4)+19+(n*4);
        }
        else
        {
            sum=((n-m)*4)+19+(n*4);
        }
        printf("Case %d: %d\n",j,sum);
        j++;
    }
    return 0;
}
