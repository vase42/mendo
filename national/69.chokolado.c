#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    char niza[250];
    scanf("%s", niza);
    char cha;
    scanf(" %c", &cha);
    int c=0;
    for(int i=0;i<strlen(niza)-1;i++){
        if(cha == niza[i]){
            if(cha != niza[i+1]){
                c++;
            }
        }
        if(cha != niza[i]){
            if(cha == niza[i+1]){
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}