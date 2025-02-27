#include <stdio.h> 
 int main() {
    int a,b,i=0,m;
    scanf("%d%d", &a, &b);
    m=b-a;
    while(m>0){
        if(m>=5){
            m-=5;
            i++;
        }
        if(m<5&&m>=2){
            m-=2;
            i++;
        }
        if(m<2&&m>0){
            m-=1;
            i++;
        }
 
    }
    printf("%d", i);
    return 0;
 } 