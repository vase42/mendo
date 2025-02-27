#include<stdio.h>
int main(){
    int a,b,c,d,x=0;
    for(int i=0;;i++){
        scanf("%d",&a);
        if(a==2) break;
        x++;
    }
    x--;
    int s=x+3;
    for(int i=0;;i++){
        scanf("%d",&a);
        if(a==3) break;
        s++;
    }
    printf("%d %d",s/x,x);
}