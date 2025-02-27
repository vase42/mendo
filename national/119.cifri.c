#include<stdio.h>
int main(){
    int a,b;
    int num[]={0,0,0,0,0,0,0,0,0,0};
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int tmp=i;
        while(tmp){
            num[tmp%10]++;
            tmp/=10;;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
}