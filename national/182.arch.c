#include<stdio.h>
int main(){
    int a,b[1000];
    long long max=0,mix=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int c=0,x=1;
        scanf("%d",&b[i]);
        for(int j=b[i];j>0;j/=10){
            if(j%2==0)
            c++;
            else{
                x=0;
                c=0;break;
            }
        }
        max+=c;
        mix+=x;
    }
    printf("%lld\n%lld",mix,max);
}