#include<iostream>
using namespace std;

long long mod(int x,int n, int m){//x-->a and n-->b
 int res=1;
    while(n>0){
       
        if(n&1){//odd
            res=((1ll*res)*x%m)%m;//ll-->use to in range
         }
         x=((1ll*x%m)*x%m);
         n=n>>1;//divddie by 2
    }
    return res;
}

int main(){
    int x,n,m;
    cin>>x>>n>>m;

    int ans =mod(x,n,m);

    cout<<ans;

    return 0;
}