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
int n,k;int num[30005];bool mp[100005];
void init()
{
    memset(num,0,sizeof(num));
    memset(mp,0,sizeof(mp));
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
        //if(k%3==0&&mp[k/3])printf("o hu~\n");
        //else if(num[n-1]*3<k)printf("wo yo wo yo~\n");
        //else if(num[0]*3>k)printf("wo yo wo yo~\n");
       // else
       // {
            int flag=0,total=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    total=num[i]+num[j];
                    if(mp[k-total])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
            }
            if(flag==1)printf("o hu~\n");
            else printf("wo yo wo yo~\n");
       // }
    }
}
