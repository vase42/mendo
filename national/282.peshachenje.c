#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",10000-((a*60)*2+(b*60)*4)); 
}