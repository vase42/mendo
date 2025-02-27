#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    int result[250];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char poraka[250];
        char niza[250];
        scanf("%s", poraka);
        scanf("%s", niza);
        int count=0;
        int k=0;
        if(strlen(poraka)>strlen(niza)){
            result[i]=0;
            continue;
        }
        for(int j=0;j<strlen(poraka);j++){
            for(;k<strlen(niza);k++){
                char a = poraka[j];
                char b = niza[k];
                if(a == b){
                    k++;
                    count++;
                    break;
                }
            }
        }
        if(count == strlen(poraka))
            result[i]=1;
        else
            result[i]=0;
    }
    for(int i=0;i<n;i++){
        if(result[i]==0)
        printf("NE\n");
        else
        printf("DA\n");
    }
}