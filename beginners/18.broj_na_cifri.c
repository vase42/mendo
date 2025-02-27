#include<stdio.h>
#include<math.h>
int main(){
    int n,m=0,z=1,i;
    scanf("%d",&n);
    if(n==0){
        printf("1");
         return 0;
    }
    for(i=0;n>0;i++){
        n=n/10;
    }
    printf("%d",i);
    return 0;
}