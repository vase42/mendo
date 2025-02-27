#include<stdio.h>
#include<string.h>
int main(){
    int num1,num2,pl_1=0,pl_2=0,max1=0,max2=0;
    for(int i=0;i<3;i++){
        scanf("%d%d",&num1,&num2);
        if(num1>max1)
        max1=num1;
        if(num2>max2)
        max2=num2;
        int dig1 = num1/100+(num1/10)%10+num1%10;
        int dig2 = num2/100+(num2/10)%10+num2%10;
        if(num1%dig1==0){
            pl_1+=2;
            pl_2--;
        }
        if(num2%dig2==0){
            pl_2+=2;
            pl_1--;
        }
    }
    printf("%d %d\n", pl_1, pl_2);
    if(pl_2>pl_1)
    printf("Ana");
    else if(pl_1>pl_2)
    printf("Stefan");
    else{
        if(max1>max2)
        printf("Stefan");
        else
        printf("Ana");
    }
    return 0;
}