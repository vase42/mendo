#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=(a+b+c)%3;
    if(sum==0) printf("0");
    if(sum==1) printf("2");
    if(sum==2) printf("1");
}