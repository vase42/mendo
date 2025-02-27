#include<stdio.h>
int main(){
    int arr[12][12]={0},c=0,n,a,num;
    char m,let;
    scanf("%c %d%d",&m,&n,&a);
    for(int i=0;i<a;i++){
        scanf(" %c %d",&let,&num);
        arr[let-95][num+2]=1; }
    if(arr[m-96][n]==1) c++;
    if(arr[m-97][n+1]==1) c++;
    if(arr[m-97][n+3]==1) c++;
    if(arr[m-96][n+4]==1) c++;
    if(arr[m-94][n]==1) c++;
    if(arr[m-93][n+1]==1) c++;
    if(arr[m-93][n+3]==1) c++;
    if(arr[m-94][n+4]==1) c++;
    printf("%d",c);
}