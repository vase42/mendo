#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int a,b,x,y;
    scanf("%d%d%d%d", &x,&y,&a,&b);
    int n,m;
    scanf("%d%d", &n,&m);
    if(n>=x&&n<=x+a){
        if(m>=y&&m<=y+b){
            if(n==x||n==x+a||m==y||m==y+b)
            printf("strana");
            else
            printf("vnatre");
        }
        else
        printf("nadvor");
    }
    else
    printf("nadvor");
    return 0;
}