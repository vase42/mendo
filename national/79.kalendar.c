#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
        printf("31");
    }
    if(n==4||n==6||n==9||n==11){
        printf("30");
    }
    if(n==2){
        if((m%400==0)||((m%4==0)&&(m%100!=0))){
            printf("29");
        }
        else{
            printf("28");
        }
    }
}