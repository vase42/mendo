#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x,y;
    scanf("%d%d",&x,&y);
    if(y+c>=60){
        c=y+c-60;
        b++;
    }
    else{
        c=y+c;
    }
    if(b+x>=60){
        b=b+x-60;
        a++;
    }
    else{
        b=b+x;
    }
    printf("%d %d %d",a,b,c);
}