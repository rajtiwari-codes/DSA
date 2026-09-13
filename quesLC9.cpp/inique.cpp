#include<iostream>
using namespace std;
// find unique element in array when only one element is diifent and same element is double not triplee
int xorr(int arr[],int n){

      int ans=0,i=0;
      while(i<n){
       ans=ans ^ arr[i];
       i++;
      }
     return ans;
}

     int main(){
       int arr[5]={3,1,4,1,3,};
       int unique= xorr(arr,5);
           cout<< unique<<endl;

        return 0;
       }