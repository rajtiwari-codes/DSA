#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;//take input from user

    // //-->1)
    // int i=1; //row start?? form 1
    // while(i<=n){     //row kaha tak jayega?? n tak
      
    //     int j=1;   //column start ??
    //     while(j<=n){     //kah tak colmn jayega
    //         cout<<"*";
    //         j=j+1;
    //     }                  //hence ek bar all column print ho gaya
    //     cout<<endl;         //next line
    //     i=i+1;
    // }

    //-->2)

    // int i=1;
    // while(i<=n){

    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //          j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //--3)

    //  int i=1;
    // while(i<=n){

    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //          j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //--4)

    // int i=1;
    // while(i<=n){

    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //          j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //-->5)
// int i=1;
// int count=1;   
// while(i<=n){

//     int j=1;
//     while(j<=n){
//         cout<<count<<" ";   //count varible define that print do
//         count++;            //eac time after print increse do
//         j=j+1;             //after incers go another xolumn me not same col till condition
//     }
//     cout<<endl;
//     i=i+1;
// }

//--6)trangle pattern

    //  int i=1;
    //  while(i<=n){

    //     int j=1;
    //     while(j<=i){    //colum jo hai less or equall to row
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i++;
    //  }

    //--7>

    //    int i=1;
    //   while(i<=n){

    //     int j=1;
    //     while(j<=i){    //colum jo hai less or equall to row
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i++;
    //  }

    //---8

    //   int count=1;
    //   int i=1;
    //   while(i<=n){

    //     int j=1;
    //     while(j<=i){    //colum jo hai less or equall to row
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //  }

 //---9
    
    //   int i=1;
    //   while(i<=n){

    //     int j=1;
    //     int val=i;
    //     while(j<=i){    //colum jo hai less or equall to row
    //         cout<<val;
    //         val++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //  }

     //ORRRR

//     int i = 1;
//    while(i <= n) {

//     int j = 1;
//     while(j <= i) {

//         cout << (i + j - 1) << " ";  // Formula: row + col - 1
//         j++;
//     }
//     cout << endl;
//     i++;
// }

      //--10

//     int i = 1;
//     while(i <= n) {

//     int j = 1;
//     while(j <= i) {

//         cout << (i - j + 1) << " ";  // Formula: row + col - 1
//         j++;
//     }
//     cout << endl;
//     i++;
// }


//-->11)
      
// int i=1;
// while(i<=n){

//     int j=1;
//     while(j<=n){
//         char ch='A'+i-1;//convert int int o charcater
//         cout<<ch<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//-->12)
      
// int i=1;
// while(i<=n){

//     int j=1;
//     while(j<=n){
//         char ch='A'+j-1;
//         cout<<ch<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//-->13)
    
// char ch='A';
// int i=1;
// while(i<=n){

//     int j=1;
//     while(j<=n){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//-->14)
    
// int i=1;
// while(i<=n){

//     int j=1;
//     while(j<=n){
//    char ch='A'+i+j-2;
//         cout<<ch<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//-->15)
    
// int i=1;
// while(i<=n){

//     int j=1;
//     char ch='A'+n-i;
//     while(j<=i){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//-->16)
    
// //for row
// int i=1;
// while(i<=n){

//     //for space
//     int space=n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     //for column
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


//-->17)
    
// int i=1;
// while(i<=n){

//     int j=1;
//     while(j<=n-i+1){
//         cout<<"*";
//         j++;
//    }
//     cout<<endl;
//     i++;
// }

//---18

// //for row
// int i=1;
// while(i<=n){

//     //for space
//     int space=i-1;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     //for column
//     int j=1;
//     while(j<=n-i+1){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//---->19

//for row
int i=1;
while(i<=n){

    //for space
    int space=n-i;
    while(space){
        cout<<" ";
        space--;
    }

    //for 2 trangle

    int j=1;
    while(j<=i){
        cout<<j;
        j++;
    }
    //print 3 trangle
    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    i++;
}


    return 0;
}