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
#include<queue>
using namespace std;
int a,b,n;
int main()
{
    scanf("%d%d%d",&a,&b,&n);
    if(abs(a+b)>n)
        printf("NO\n");
    else
    {
        if(n%2==0&&(abs(a+b)%2)==0)printf("YES\n");
        else if(n%2!=0&&(abs(a+b)%2)!=0)printf("YES\n");
        else printf("NO\n");
    }
}
