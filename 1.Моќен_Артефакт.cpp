#include<stdio.h>
int main(){
    int vol;
    scanf("%d", &vol);
    int mag[vol];
    for(int i=0;i<vol;i++){
        scanf("%d", &mag[i]);
    }
    for(int i=0;i<vol;i++){
        for(int j=i+1;j<vol;j++){
            if(mag[i]<mag[j]){
                int temp=mag[i];
                mag[i]=mag[j];
                mag[j]=temp;
            }
        }
    }
    int sum=0,c=0;
    for(int i=0;i<vol;i++){
        sum+=mag[i]+1;
        c++;
        if(sum<vol){
            continue;
        }
        else{
            break;
        }
    }
    printf("%d", c);
    return 0;
}
