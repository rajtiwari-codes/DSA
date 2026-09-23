#include<iostream>
using namespace std;

int pivot(int arr[],int n){

    int s=0,e=n-1;
    
    while(s<e){
int mid=s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }else{
            e=mid;//mid-1?? because if mid laredy presnrt at pivit element and we do subtarct they can go 1 case which is wrong
        }
    }
    return s;
}
int main(){


int arr[5]={8,10,12,4,6};//soerted rotated aray apply condition

cout<<"pivot element at index "<<pivot(arr,5)<<endl;//-1
 return 0;
}