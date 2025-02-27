#include<stdio.h>
int main(){
    int a,b[1000],max=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(max<b[i])
        max=b[i];
    }
    long long c=0;
    for(int i=0;i<a;i++){
        c+=max-b[i];
    }
    printf("%lld",c);
}