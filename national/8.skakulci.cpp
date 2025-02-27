#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,i=0;
    cin>>a>>b>>c;
    if((c-b)<(b-a)){
        cout<<b-a-1;
    }
    if((c-b)>=(b-a)){
        cout<<c-b-1;
    }
    return 0;
}