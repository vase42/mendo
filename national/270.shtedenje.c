#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int k,a,b;
    scanf("%d%d%d", &k, &a, &b);
    int sum = 0, i = 0;
    while(k>sum){
        k = k + a;
        sum = sum + b;
        i++;
    }
    if(k == sum)
    printf("%d", i);
    else
    printf("NE");
}