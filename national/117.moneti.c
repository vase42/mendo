#include<stdio.h>
int main(){
    int a,b,c,d,x=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==5) x++;
    if(b==5) x++;
    if(c==5) x++;
    if(d==5) x++;
    if(4-x<x) printf("%d",4-x);
    else printf("%d",x);
}