//maximum no of 1's in a row 
#include<iostream>
using namespace std;

// //brute force logic-->m-1
// int count(int arr[][4],int row,int col){

//     int maxcount=-1;
//     int index = -1;

//     for(int i=0;i<row;i++){
//       int count=0;
//       for(int j=0; j<col; j++){
//          if(arr[i][j] == 1){
//             count++;
//           }
//       }  
       
//         if(count>maxcount){
//             maxcount=count;
//             index = i;
//         }
    

//     }
//     return index;
// }

int count(int arr[][4],int row,int col){

     int rowIndex = 0;
     int colIndex = col - 1;
      int ans = -1;

   while(rowIndex < row && colIndex >= 0) {

    if(arr[rowIndex][colIndex] == 1) {
            ans = rowIndex;
            colIndex--;
        }
        else {
            rowIndex++;
        }
    }

    return ans;
}

int main(){

    int arr[3][4];//initise

    for(int i=0;i<3;i++){//taking input
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
     }

     for(int i=0;i<3;i++){//print
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

   cout<<count(arr,3,4)<<endl;

    return 0;
}