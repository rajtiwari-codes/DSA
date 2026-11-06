#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=0){
        return false;
    }
   for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n=40;
    int cnt=0;
    for(int i=2;i<n;i++){
        if(isprime(i))
        cnt++;
    }
    cout<<cnt;

    return 0;
}
