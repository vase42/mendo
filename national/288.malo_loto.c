#include<stdio.h>
int main(){
    int a=5;
    int n[5];
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(n[i]<n[j]){
                int tmp=n[i];
                n[i]=n[j];
                n[j]=tmp;
            }
        }
    }
    printf("%d %d", ((n[0]*100)+(n[1]*10)+n[2]),((n[0]*100)+(n[1]*10)+n[2])*2);
}