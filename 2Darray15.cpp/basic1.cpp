#include<iostream>
using namespace std;

int main(){

    //--1,2)crete 2D arr which jas 3 row and 4 column hence 12 element
    // int arr[3][4];

    //--3)take input in 2 D array as a row wise
   //   int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

   //--4) assingn directly row and col
   int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //-->1)take input -->ROW WISE  IN 2 D ARRY because first we write row then column
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cin>>arr[row][col];
    //     }
    // }

         
    //--->2)take input -->COL WISE ?? IN 2 D ARRY because first we write col then row
    // for(int col=0;col<4;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //print
    
      for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

   return 0;
}