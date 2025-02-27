#include<stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a+1;i<=b;i++){
        if(i%3==0) c+=3;
        if(i%3==1) c+=1;
        if(i%3==2) c+=2;
    }
    printf("%d",c);
}