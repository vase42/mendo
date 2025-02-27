#include<stdio.h>
#include<math.h>
int main(){
    int n,m=0,z=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        z=z*i;
    }
    printf("%d",z);
    return 0;
}