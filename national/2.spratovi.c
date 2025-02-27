#include<stdio.h>
#include<string.h>
int main(){
    int st,sprat,min=0,max=10001;
    scanf("%d", &st);
    char string[2] = {'\0'};
    for(int i=0;i<st;i++){
        scanf("%d", &sprat);
        int n = sprat;
        scanf("%s", string);
        if(strcmp(string, "DA") == 0){
            if(max>n)
            max=n;
        }
        if(strcmp(string, "NE") == 0){
            if(min<n)
            min=n;
        }
    }
    printf("%d %d", min+1, max-1);
    return 0;
}