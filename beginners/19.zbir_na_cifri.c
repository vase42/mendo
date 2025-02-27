#include<stdio.h>
#include<math.h>
int main(){
    int n,m=0,z=1,i;
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        m+=n%10;
        n=n/10;
    }
    printf("%d",m);
    return 0;
}