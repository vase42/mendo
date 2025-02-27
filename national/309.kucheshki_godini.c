#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++){
        if(i==1){
            sum+=15;
        }
        if(i==2){
            sum+=9;
        }
        if(i>2&&i<7){
            sum+=4;
        }
        if(i>6){
            sum+=5;
        }
    }
    printf("%d",sum);
}