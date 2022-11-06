#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    int t,p=1;
    cin>>t;
    while(t--)
    {
        int x,i,a,sum;
        vector<int>vec;
        for(i=0;i<3;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        a=vec[2]*vec[2];
        sum=(vec[0]*vec[0])+(vec[1]*vec[1]);
        if(a==sum)
        {
            printf("Case %d: yes\n",p);
            p++;
        }
        else
        {
            printf("Case %d: no\n",p);
            p++;
        }
    }
    return 0;
}
