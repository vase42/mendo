#include<stdio.h>
int main(){
    int n[3];
    for(int i=0;i<3;i++)
    scanf("%d",&n[i]);
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(n[i]<n[j]){
                int tmp=n[i];
                n[i]=n[j];
                n[j]=tmp;
            }
        }
    }
    printf("%d",(n[0]*n[0])+n[1]+n[2]);
}