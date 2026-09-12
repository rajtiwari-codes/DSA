#include<iostream>
using namespace std;

void rev(int arr[],int n){

   int start=0;
   int end=n-1;

   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}


void prin(int arr[],int n){
    for( int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int arr[6]={3,3,4,5,67,90};
int brr[5]={2,57,8,89,5};

//callinf revese function
rev(arr,6);
rev(brr,5);

//call printing function
prin(arr,6);
prin(brr,6);


    return 0;
}