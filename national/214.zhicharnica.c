#include<stdio.h>
#include<math.h>
int main(){
    int n,b;
    int sum=0,c=0;
    int a[100];
    scanf("%d%d", &n, &b);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(sum+a[i]<=b){
            sum=sum+a[i];
        }
        else{
            sum=0;
            sum=sum+a[i];
            c++;
        }
    }
    printf("%d", c+1);
}