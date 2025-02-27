#include<stdio.h>
int main(){
    int n,x,arr[1000];
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i+=x){
        sum=sum+(arr[i]*2);
    }
    printf("%d",sum);
}