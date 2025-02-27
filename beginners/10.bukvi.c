#include<stdio.h>
#include<math.h>
int main(){
    char a,b,c;
    scanf("%c",&a);
    if(a>=65&&a<=90){
        printf("GOLEMA");
        return 0;
    }
    if(a>=97&&a<=122){
        printf("MALA");
        return 0;
    }
    else printf("GRESKA");
    return 0;
}