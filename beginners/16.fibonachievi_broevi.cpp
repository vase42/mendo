#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=1,i=0,a=0;
    cin>>n;
    while(n>=sum){
        cout<<sum<<endl;
        a=i;
        i=sum;
        sum=a+i;
    }
}