#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    int i;
    for(i=0;sum!=a;i++){
        sum+=i;
    }
    printf("%d",i-1);
}