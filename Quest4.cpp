#include<iostream>
using namespace std;
int main(){

    // //bitwise operstors
    // int a=4;
    // int b=5;

    // cout<<"a&b =" <<(a&b)<<endl;
    // cout<<"a|b =" <<(a|b)<<endl;
    // cout<<"a^b =" <<(a^b)<<endl;
    // cout<<"~a =" <<(~a)<<endl;

    //   cout<<(18>>1)<<endl;
    //    cout<<(18>>2)<<endl;
    //    cout<<(14<<1)<<endl;
    //    cout<<(34<<2)<<endl;

    //    //increment or sdecemment oopertr

    //    int i=8;
    //    cout<<(i++)<<endl;
    //    cout<<(++i)<<endl;
    //     cout<<(i--)<<endl;
    //     cout<<(--i)<<endl;

//qustion solve


// int a,b=1;
// a=10;
// if(++a){
//     cout<<b;      //print only=1 

// }else{
//     cout<<++b;      //not this bscuse if condition are true
// }

// int a=1;
// int b=2;
// if(a-- >0 && ++b >2){
//     cout<<"stgae-1";      //outpit come
// }else{
//     cout<<"stage-2";       //not print
// }
// cout<<"a="<<a <<"b =" << b<<endl;   //a=0,b=3

// int number=3;
// cout<< (25 *(++number));   //100

// int a=1;
// int b=a++;  //a=2,b=1
// int c=++a;   //a=3 c=3
// cout<<b;
// cout<<c;

//topic


// int n;
// cout<<"enetr the value of n" <<endl;
// cin>>n;

// cout<<"printh raj bro"<<endl; //after enetring value of n then print this otherwisecnot prit

// int i=1;
// for(; ; ){ //is this logic was corect --->yessss
//     if(i<=n){
//         cout<<i<<endl;
//     }else{
//         break;
//     }
//     i++;
// }

// for (int a=0 ,b=1; a>=0 && b<=1; a--,b--){
//     cout<<a <<" "<< b<<endl;
// }

//fibonacci

// int n=8;
// int a=0;
// int b=1;

// for(int i=0;i<=n;i++){

//     int c=a+b;
//     cout<<c<<"  ";

// a=b;
// b=c;
// }

//prime no

// m--1)logic was wrongggg

// int n=7;
// for(int i=2;i<n;i++){
//    if(n%i==0){
//     cout<<"Not a prime no"<<endl;
//     break;
//    }else{
//     cout<<"prime no"<<endl;
//    }
// }

//m-2

int n = 7;
bool isPrime = true;  // Assume it's prime

for(int i = 2; i < n; i++) {
    if(n % i == 0) {
        isPrime = false;   //our assumption wa s wrong
        break;
    }
}
if(isPrime) {
    cout << "Prime no" << endl;
} else {
    cout << "Not a prime no" << endl;
}



    return 0;
}