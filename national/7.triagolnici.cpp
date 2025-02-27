#include<iostream>
#include<cmath>
using namespace std;
 
int dali(int x1, int y1, int x2, int y2, int x3, int y3){
    float c = pow(x1-x2,2)+pow(y1-y2,2);
    float b = pow(x2-x3,2)+pow(y2-y3,2);
    float a = pow(x1-x3,2)+pow(y1-y3,2);
    float max;
    if(c<b){
        float tmp = c;
        c = b;
        b = tmp;
    }
    if(c<a){
        float tmp = c;
        c = a;
        a = tmp;
    }
    if(b<a){
        float tmp = a;
        a = b;
        b = tmp;
    }
    if(c == a+b) return 1;
    return 0;
}
 
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum+=dali(arr[i][0],arr[i][1],arr[j][0],arr[j][1],arr[k][0],arr[k][1]);
            }
        }
    }
    cout<<sum;
}