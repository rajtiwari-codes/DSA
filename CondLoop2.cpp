#include<iostream>
using namespace std;

int main(){

    //1)check vsalue is +ve ,-ve or 0

    // int a;
    // cout<<"enter the value of a"<<endl;
    // cin>>a;

    // if(a>0){
    //     cout<<"the value is +ve"<<endl;
    // }else if(a<0){
    //      cout<<"the value is -ve"<<endl;
    // }else{
    //      cout<<"the vqlue is 0"<<endl;
    // }
  
    //2)input anorther method cin.get()

    // int a,b;
    // cin>>a>>b;
    // cout<<"value f a nad b is "<<a <<" " <<b <<endl;
    // //u wwil get output as what u are entered but

    // int a,b;
    // a=cin.get();
    // cout<<"the value of a is :"<< a <<endl;
    //here if we click---enter, space or tab it read that valuewhich are written in ASCII table and give output

    //3)entered no is lower,upper o numerical

    //   char ch;
    //   cout<<"enter the value of charcater"<<endl;
    //   cin>>ch;

    //   if(ch>='A' && ch<='Z'){
    //     cout<<"entered vaueus Upper case"<<endl;
    //   }else if(ch>='a'&&ch<='z'){
    //     cout<<"entered charedtr is lower case"<<endl;
    //   }else if(ch>='0' && ch<='9'){
    //     cout<<"entered value is numerical"<<endl;
    //   }else{
    //     cout<<"enterd value is special xcharxater"<<endl;
    //   }

     //4)print no from 1 to n

    //  int n;
    //  cin>>n;

    //  int i=1;
    //  while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;
    //  }

     //5 program sum fro 1 to n

    //  int n;
    //  cin>>n;

    //  int i=1;
    //  int sum=0;

    //  while(i<=n){
    //     sum=sum+i;
    //      i=i+1;
    // }
    // cout<<sum<<endl;

     //6)enterend no is prime or not

    int n;
    cin >> n;

    int i = 2;

    while (i < n) {
            if (n % i == 0) {
            cout << "NOT prime" << endl;
            return 0;
        }
         i = i + 1;
    }
   cout << "Entered no is prime" << endl;


   
    return 0;
}
