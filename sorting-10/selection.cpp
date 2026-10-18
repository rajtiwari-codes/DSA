#include<iostream>
using namespace std;

 void insert(int arr[],int n){
   
    for(int i=0;i<n-1;i++){//outer lopp start from 0 and n-1 becaus eelest element alredy sortd
         int minindex=i;//assme 0 index alredy sorted
         for(int j=i+1;j<n;j++){//comare from 1 to last 
        if(arr[minindex]>arr[j]){
            minindex=j;
           
        }
    }
     swap(arr[i],arr[minindex]);
    }
}
   
    int main(){

    int arr[6]={2,7,9,67,8,0};
    int n=6;
    insert(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}