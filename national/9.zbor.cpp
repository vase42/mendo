#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int z=0;
    cin>>a;
    for(int i=0;a.size()>i;i++){
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'){
            if(a.size()-i-1==0)break;
            if(a[i+1]!='a'&&a[i+1]!='e'&&a[i+1]!='i'&&a[i+1]!='o'&&a[i+1]!='u'){
                z++;
            }
        }
    }
    cout<<z;
    return 0;
}