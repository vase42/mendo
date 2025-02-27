#include<stdio.h>
#include<math.h>
int main(){
    int n,z=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        z+=i;
    }
    printf("%d",z);
    return 0;
}