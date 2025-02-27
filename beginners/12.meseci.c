#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    scanf("%d",&n);
    if(n==2){
        printf("28");
        return 0;
    }
    if(n<8){
        if(n%2==0){
            printf("30");
        }
        else printf("31");
    }
    if(n>7){
        if(n%2==0){
            printf("31");
        }
        else printf("30");
    }
    return 0;
}