#include<iostream>
#include <algorithm>
using namespace std;


    void swapp(int arr[],int n){
        int i=0;
        while(i<n-1){
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
    }


    void print(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main(){
int arr[5]={3,45,6,78,545};

swapp(arr,5);

print(arr,5);

    return 0;
}