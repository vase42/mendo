#include<stdio.h>
int main(){
    int n,arr[10],c=0;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        arr[i]=n%42;
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<9;i++){
        if(arr[i]==arr[i+1])
        c++;
    }
    printf("%d",10-c);
}