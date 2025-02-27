#include<stdio.h>
int main(){
  int a,b,cou=0,max=0,num;
  scanf("%d%d",&a,&b);
  for(int i=a;i<=b;i++){
    for(int j=i;j>=1;j--){
      if(i%j==0){
        cou++;
      }
    }
    if(cou>max){
      max=cou;
      num=i;
    }
    cou=0;
  }
  for(int i=num;i>0;i--){
    if(num%i==0)
    cou++;
  }
  printf("%d %d",num,cou);
}