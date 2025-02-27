#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a==0){
        if(b==0){
            printf("ima beskonecno resenija");
        }
        printf("nema resenie");
    }
    else printf("%d",-1*b/a);
    return 0;
}