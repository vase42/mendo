#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,z=0;
    string b,a;
    cin>>n;
    for(int i=1;z<n;i++){
        b=b+to_string(i);
        z+=b.length();
    }
    cout<<b[n-(z-b.size())-1];
    return 0;
}