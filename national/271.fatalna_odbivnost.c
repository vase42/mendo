#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int one = 0, two = 0, array[250], n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    int c=0;
    int haha = 1;
    while(haha){
        int a=0;
        for(int i=0;i<n;i++){
            if(array[i]==1&&array[i+1]==2){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                a++;
                c++;
            }
        }
        if(a==0)
        haha=0;
    }
    printf("%d", c);
    return 0;
}