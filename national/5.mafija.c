#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
typedef enum { F, T } boolean;
int main(){
    int num_f;
    scanf("%d", &num_f);
    int loc_f[num_f], sum = 0;
    for(int i = 0; i < num_f; i++){
        scanf("%d", &loc_f[i]);
        sum += loc_f[i];
    }
    boolean stop = T;
    int art = sum/num_f;
    int new = 999999;
    int house = 999999;
    for(int i = 0; (i < num_f) && (stop == T); i++){
        int dif = abs(art-loc_f[i]);
            if(dif == 0){
                house = loc_f[i];
                stop = F;
            }
            if(dif < new){
                new = dif;
                house = loc_f[i];
            }
    }
    printf("%d", house);
    return 0;
}