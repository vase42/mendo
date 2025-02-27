#include<stdio.h>
int main(){
    int a,b,x=0,c;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int k=i;
        c=k%10;
        k/=10;
        while(k){
            if(k%10>=c) break;
            c=k%10;
            k/=10;
        }
        if(!k) x++;
    }
    printf("%d",x);
}