/*
    author: gsw
    language: c++
    link:https://www.nowcoder.com/acm/contest/127#question
    data:2018.6.14
*/
#define IO ios::sync_with_stdio(false);
#define ll long long

#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
int main()
{
    int n,x1,x2,x3,y1,y2,y3;
    scanf("%d",&n);
    double ans=0;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    scanf("%d%d",&x3,&y3);
    ans=abs((double(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2))/2);
    for(int i=3;i<n;i++)
    {
        x2=x3;y2=y3;
        scanf("%d%d",&x3,&y3);
        ans+=abs((double(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2))/2);
    }
    int bns=ans;
    //cout<<ans<<" "<<ans-bns<<endl;
    if(ans-bns>=0.5)bns++;
    printf("%d\n",bns);
}
