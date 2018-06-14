/*
    author: gsw
    language: c++
    link:https://www.nowcoder.com/acm/contest/127#question
    data:2018.6.13
*/
#define IO ios::sync_with_stdio(false);
#define ll long long

#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int n,k;
int num[105];bool mp[200005];
void init()
{
    memset(num,0,sizeof(num));
    memset(mp,0,sizeof(mp));
}
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    while(~scanf("%d%d",&n,&k))
    {
        init();
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            mp[num[i]]=1;
        }
        sort(num,num+n);
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int kk=0;kk<n;kk++)
                    if(num[i]+num[j]+num[kk]==k)ans++;
        //cout<<ans<<endl;
        if(ans==0)printf("0/1\n");
        else
        {
            int g=gcd(ans,n*n*n);
            printf("%d",ans/g);printf("/");
            printf("%d\n",n*n*n/g);
        }
    }
}
