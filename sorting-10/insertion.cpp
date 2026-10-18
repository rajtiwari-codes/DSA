#include<iostream>
using namespace std;

 void select(int arr[],int n){
   
    for(int i=1;i<n;i++){
         int temp=arr[i];
         int j;

         for( j=i-1;j>=0;j--){ 
            if(arr[j]>temp){
              arr[j+1]=arr[j];
           
            }else{
              break;
        }
       
    }
             arr[j+1]=temp;
    }
}
   
    int main(){

    int arr[6]={2,7,9,67,8,0};
    int n=6;
    select(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}