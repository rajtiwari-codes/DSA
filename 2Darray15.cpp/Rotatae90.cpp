//riotatate a matrix by 90 degree--s-1 transpodse then swap
#include<iostream>
#include <algorithm>
using namespace std;

void reverse90(int arr[][3],int row,int col){

     //tranpose the element
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //swap 0 and 1 index
    for(int i=0;i<3;i++){
        int start=0;
        int end=2;
        while(start<end){
            swap(arr[i][start],arr[i][end]);//i tell in whicxh row swap do
            start++;
            end--;
        }
    }
    cout<<endl;
}

int main(){

    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


     reverse90(arr,3,3);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

     return 0;
}