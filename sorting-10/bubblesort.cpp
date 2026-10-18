#include<iostream>
using namespace std;

 void bubble(int arr[],int n){
   
    for(int i=1;i<n;i++){//outer loop denotes----> pass
         for(int j=0;j<n-i;j++){ //inner loop use for acdeesing the value
        if(arr[j]>arr[j+1]){//adjacent elemnt are comparble 
           swap(arr[j],arr[j+1]);
        }
    }
     
    }
}
   
int main(){

    int arr[6]={2,7,9,67,8,0};
    int n=6;
    bubble(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}