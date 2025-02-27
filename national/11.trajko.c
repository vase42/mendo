#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char string[250];
    long long c=1;
    scanf("%s", &string);
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='t'||string[i]=='T'){
            c*=3;
            i+=7;
            /*printf("%d - Troduplo\n", c);*/
            continue;
        }
        if(string[i]=='D'||string[i]=='d'){
            c*=2;
            i+=4;
            /*printf("%d - Duplo\n", c);*/
            continue;
        }
        if(string[i]=='M'||string[i]=='m'){
            c-=1;
            i+=4;
            /*printf("%d - Minus\n", c)*/;
            continue;
        }
    }
    printf("%lld", c);
    return 0;
}