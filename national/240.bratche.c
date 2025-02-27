#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=(a%10)*100+(((a/10)%10)*10)+a/100;
    if(a>b) printf("%d",a);
    if(a<=b) printf("%d",b);
}