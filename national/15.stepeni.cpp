#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int max = 0;
    for(int i=1;i*5<=n;i++) {
        int petki = n-5*i;
        int trojki = petki/3;
        int kurac = petki*9+trojki*5;
        if(kurac>max)
            max = kurac;
    }
    cout<<max<<endl;
    return 0;
}