#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    for(int j=1;j<=b;j++){
        if(a%j==0&b%j==0){
            printf("%d\n",j);
        }
    }
}