#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,mat[100][100];
    cin>>x;
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=x-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(mat[i][j]>mat[i][j+1])
                mat[i-1][j]+=mat[i][j];
            else
                mat[i-1][j]+=mat[i][j+1];
        }
    }
    cout<<mat[0][0];
}