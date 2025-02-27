#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(a/10)%10+(b/10)%10);
    return 0;
}