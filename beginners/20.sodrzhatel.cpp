#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a%b==0||b%a==0){
if(a>b) cout<<a;
else cout<<b;
}
else cout<<a*b;
return 0;
}