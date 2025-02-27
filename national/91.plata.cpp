#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c-b==b-a) cout<<c+(c-b);
    else{
        cout<<c*(b/a);
    }
    return 0;
}