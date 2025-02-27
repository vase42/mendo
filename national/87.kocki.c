#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if((b*b)%2!=0) b--;
    printf("%d",b*b);
}