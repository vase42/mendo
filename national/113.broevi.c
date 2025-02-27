#include <stdio.h> 
 int main() {
    int sum,diff;
    scanf("%d%d", &sum, &diff);
    if(sum<diff){
        printf("NE MOZE");
        return 0;
    }
    int a = (sum+diff)/2;
    int b = sum-a;
    if(a<b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a+b!=sum || a-b!=diff){
        printf("NE MOZE");
        return 0;
    }
    printf("%d %d", a , b);
    return 0;
 } 