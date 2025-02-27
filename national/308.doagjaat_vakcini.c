#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int a,b,c,d,f;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    int sum=0;
    sum+=a/2;
    sum+=b/2;
    sum+=c/2;
    sum+=d/2;
    sum+=f/2;
    printf("%d",sum);
}