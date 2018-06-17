#include<bits/stdc++.h>
using namespace std;
char cg[8][200];
char temp[]="MW3E|-.";
char cg2[5][10]={
    "3EWM-|.",
    "WM3E|-.",
    "MWE3|-.",
    "E3WM-|.",
    "3EMW-|."
};
char mp[12][12];
void init()
{
    for(int i=0;i<7;i++) cg[1][temp[i]]=cg2[0][i];
    for(int j=4;j<=7;j++){
        for(int i=0;i<7;i++) cg[j][temp[i]]=cg2[j-3][i];
    }
}
void change(int op)
{
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++)
            mp[i][j]=cg[op][mp[i][j]];
    }
}
void op1()
{
    char t[10][10];
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            t[i][j]=mp[9-j+1][i];
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++)
            mp[i][j]=t[i][j];
    }
    change(1);
}
void op4()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=9;j++)
            swap(mp[i][j],mp[9-i+1][j]);
    }
    change(4);
}
void op5()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=9;j++)
            swap(mp[j][i],mp[j][9-i+1]);
    }
    change(5);
}
void op6()
{
    for(int i=1;i<=9;i++){
        for(int j=i;j<=9;j++)
            swap(mp[i][j],mp[j][i]);
    }
    change(6);
}
void op7()
{
    for(int i=1;i<=9;i++){
        for(int j=1;j<9-i+1;j++)
            swap(mp[i][j],mp[9-j+1][9-i+1]);
    }
    change(7);
}
int main()
{
    init();
    char op[105];
    for(int i=1;i<=9;i++) cin>>mp[i]+1;
    cin>>op;
    for(int i=0;op[i];i++){
        if(op[i]=='1') op1();
        else if(op[i]=='2') op1(),op1();
        else if(op[i]=='3') op1(),op1(),op1();
        else if(op[i]=='4') op4();
        else if(op[i]=='5') op5();
        else if(op[i]=='6') op6();
        else op7();
    }
    for(int i=1;i<=9;i++) cout<<mp[i]+1<<endl;
    return 0;
}
