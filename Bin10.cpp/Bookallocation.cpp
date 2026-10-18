#include<iostream>
#include<algorithm>
using namespace std;

int possibleSol(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];   // current student ko book do
        }
        else {
            studentCount++;      // naya student lo
            if(studentCount > m || arr[i] > mid) {
                return false;    // students kam pad gaye ya book mid se badi hai
            }
            pageSum = arr[i];    // naye student ko current book do
        }
    }
    return true;   // sab allocate ho gaya
}

int main(){

    int arr[5]={10,20,30,40,50};
    int n=5;
    int m=2;//stduent add 

    int sum=0,maxi=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(maxi,arr[i]);
    }

    int s=maxi;//0 ho sakta hai but time jyada lageA
     int e=sum;
     int ans=-1;

    while(s<=e){
       int mid=s+(e-s)/2;
       if(possibleSol(arr,n,m,mid)){
        ans=mid;
        e=mid-1;
       }else{
        s=mid+1;
       }
    }

    cout<<ans<<endl;
    return 0;
}