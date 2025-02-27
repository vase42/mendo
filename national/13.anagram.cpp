#include<bits/stdc++.h>
using namespace std;
bool anagram(string x, string y){
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    return x == y;
}
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        string x,y;
        cin>>x>>y;
        if(anagram(x,y)){
            count++;
        } 
    }
    cout<<count;
}