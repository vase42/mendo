#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    if((4-(a%4))==4){
        printf("0");
        return 0;
    }
    printf("%d",(4-(a%4))*9);
}