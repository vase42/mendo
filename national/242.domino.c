#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a+1;i++){
        sum+=i;
    }
    printf("%d",sum*a);
}