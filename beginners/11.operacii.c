#include<stdio.h>
#include<math.h>
int main(){
    char a,b,c;
    int n,m;
    scanf("%d %d %c",&n,&m,&c);
    if(c=='+')printf("%d",n+m);
    if(c=='-')printf("%d",n-m);
    if(c=='*')printf("%d",n*m);
    if(c=='/')printf("%d",n/m);
    return 0;
}