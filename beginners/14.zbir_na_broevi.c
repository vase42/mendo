#include<stdio.h>
#include<math.h>
int main(){
    int n,m,z=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        z+=m;
    }
    printf("%d",z);
    return 0;
}