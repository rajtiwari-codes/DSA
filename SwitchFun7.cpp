#include<iostream>
using namespace std;

// int main(){

    //---1)break logicc
//     char ch='1';
//     int num=1;

//     switch(2*num){//valid hai bro
//         case 1:cout<<"first"<<endl;
//         break;

//         case '1':switch(num){
//             case 1: cout<<"value of num is "<< num <<endl;
//             break;
//         }
//         break;
//         default:cout<<" invalid case"<<endl;
//  }

 //---2)calculator bro

//  int  a,b;
//  char op;

//  cout<<"Enter the value of a"<<endl;
//  cin>>a;

//  cout<<"Enter the value of b"<<endl;
//  cin>>b;

//  cout<<"Enter the opertiuon u have to perform"<<endl;
//  cin>>op;

//  switch(op){

//     case '+':cout << (a+b) <<endl;
//     break;

//    case '-':cout << (a-b) <<endl;
//     break;

//     case '*':cout << (a*b) <<endl;
//     break;

//     case '/':cout << (a/b) <<endl;
//     break;

//     case '%':cout << (a%b) <<endl;
//     break;

//     default: cout<<"invalid operation"<<endl; 
//  }

//---3)question

//  int amount = 1330;
//     int choice = 1;

//     switch(choice) {
//         case 1:
//             cout << "100 notes: " << amount / 100 << endl;
//             amount = amount % 100;
//         case 2:
//             cout << "50 notes: " << amount / 50 << endl;
//             amount = amount % 50;
//         case 3:
//             cout << "20 notes: " << amount / 20 << endl;
//             amount = amount % 20;
//         case 4:
//             cout << "1 notes: " << amount / 1 << endl;
//             amount = amount % 1;
//     }

//function logic start

//--4)power of a^b

// int power(int a,int b){

//     int ans=1;

//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }


// int main(){

//     int a,b;
//     cin>>a>>b;

//     int ans=power(a,b);
//     cout<<"answer is :"<<ans<<endl;

//      return 0;
// }

//---5)odd /even

// 1 -> Even
// 0 -> odd

// bool isEven(int a) {
//     // odd
//     if(a&1) {//use add opertaors
//         return 0;
//     }
//     else { // Even
//         return 1;
//     }
// }

// int main() {
//     int num;
//     cin >> num;
    
//     if(isEven(num)) {
//         cout << "Number is Even" << endl;
//     }
//     else {
//         cout << "Number is Odd" << endl;
//     }
    
//     return 0;
// }

//---6)cobination ogic

// int factoral(int n){

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n,int r){

//     int num=factoral(n);
//     int den=factoral(r)*factoral(n-r);

//     return num/den;
    
// }

// int main(){

//     int n,r;
//     cin>>n>>r;

//     cout<< nCr(n,r)<<endl;

//     return 0;
// }

//--7)prime or not --0-->not prime and 1-->prime

// int isPrime(int num){

//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){

//     int num;
//     cin>>num;

//     int ans=isPrime(num);
//     cout<<"answer is"<<ans<<endl;
// }

//--8)geneate n value of some AP

// int AP(int n){
//     int ans=(3*n)+7;
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"answer is:"<<AP(n)<<endl;
// }

//--9)fibonscci


int fibonacci(int n) {
    int a = 0;
    int b = 1;

    for(int i = 1; i < n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    return a;//a is nth fibocci
}

int main() {
    int n;
    cin >> n;
    
    cout << fibonacci(n) << endl;
    
    return 0;
}