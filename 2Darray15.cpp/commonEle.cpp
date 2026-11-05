//common elemnt in all row of a given matrix

#include<iostream>
#include<vector>
#include <algorithm>//??becsue sorting function
using namespace std;


// //M-1 frequecy +soring TC big 
// vector <int>common(int arr[][5],int row,int col){

//     //travese 1st row and stored all elemnt 1 time using frequecy becuse no duplicate are allowed
//      int freq[10]={0};
//       vector<int> ans;

//     //   int k=0;//you check only 0 postio ke row but check all row so amke new arr
  
//      for(int i=0;i<row;i++){
//          sort(arr[i],arr[i]+col);
//         for(int j=0;j<4;j++){//j<4 ??because j+1 is out of bound ho jatas but lst elemnt was not check yet
          
//             if(arr[i][j]!=arr[i][j+1]){//hindered  to duplicate stored hone me
//                 freq[arr[i][j]]++;
//             }
//         }
//              // Count the last element separately
//              freq[arr[i][col-1]]++;
//         }
//        for(int k = 0; k < 10; k++) {//range is 0 to 9
//           if(freq[k] == row) {
//           ans.push_back(k);
//     }

//     }
//     return ans;
// }



//M-2 frequecy + last seen 
vector <int>common(int arr[][5],int row,int col){

     int freq[10]={0};
    
     int lastseen[10];
     fill(lastseen, lastseen + 10, -1);//0 to 9 fill hoga -1

      vector<int> ans;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

      if(lastseen[arr[i][j]] != i){
            freq[arr[i][j]]++;//i and j rep current row and col
            lastseen[arr[i][j]] = i;//last seen move nexr row
        }
    } 
 }
   for(int k = 0; k < 10; k++) {
          if(freq[k] == row) {
          ans.push_back(k);
    }
    
  
}
return ans;
}


int main(){

    int arr[3][5];//initise

    for(int i=0;i<3;i++){//taking input
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
     }

 vector<int> result = common(arr, 3, 5);

for(int x : result) {
    cout << x << " ";
}

    return 0;
}