#include<stdio.h>
#include<math.h>
int main(){
    int n,m=0,z=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        m=m+z;
        z+=3;
    }
    printf("%d",m);
    return 0;
}