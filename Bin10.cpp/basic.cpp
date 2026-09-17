#include<iostream>
using namespace std;

int binsearch(int arr[],int n,int key){

   int start=0,end=n-1;

      while(start<=end){
         
        int mid=start+(end-start)/2;//value in range---> //    int mid=(start+end)/2;

   if(arr[mid]==key){//mid is inex not a value
    return mid;
   }else if(key>arr[mid]){
    start=mid+1;
   }else{
    end=mid-1; //function value ko return deta hai not print
   }
     }
return -1;
}
int main(){
int key=0;
int even[6]={2,4,68,97,100,102};
int odd[5]={1,3,7,9,11};
cout<<binsearch(even,6,key)<<endl;
cout<<binsearch(odd,5,key)<<endl;//-1
 return 0;
}