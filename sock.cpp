#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n,m,sum=0;
    cin>>n>>m;
    if(m>n){
        cout<<n;
        exit(0);
    }
    while(n-m>=0){
        sum+=m;
        n=n-m+1;
    }
    if(n>0)
        sum+=n;
    cout<<sum;
    return 0;
}
