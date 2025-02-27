#include<stdio.h>
int main(){
    int n,w,d,l,sum=0,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&w,&d,&l);
        sum=(w*3)+d;
        if(sum>max)
        max=sum;
    }
    printf("%d",max);
}