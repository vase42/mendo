#include <iostream>
using namespace std;
int main(){
    int n,m,pred = 0;
    int sum = 1;
    cin>>n>>m;
    pred=1;
    int c=0;
    for(int i=1;sum<=m;){
        i = pred;
        pred = sum;
        sum = pred + i;
        if(sum>=n&&sum<=m) c++;
    }
    cout<<c;
    return 0;
}