/*
    author: gsw
    language: c++
    link:https://www.nowcoder.com/acm/contest/127#question
    data:2018.6.15
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
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    double p;
    cin>>p;
    int fm=1000000-p*1000000;//(1-p)1000000精度不行
    int gc=gcd(fm,1000000);
    fm=fm/gc;
    int fz=1000000/gc;
    if(fm==0)cout<<"Sorrry,JuJu!"<<endl;
    else cout<<fz<<"/"<<fm<<endl;
}
