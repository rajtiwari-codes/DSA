#include<iostream>
using namespace std;

int leftoccur(int arr[],int n,int key){

   int start=0,end=n-1;
   int ans=-1;//meaning if not get that key retun -1 but down as we see we found so store that key value
      while(start<=end){
        int mid=start+(end-start)/2;
        
           if(arr[mid]==key){//mid is inex not a value
             ans=mid;
             end=mid-1;

            }else if(key>arr[mid]){
                start=mid+1;
              }else{
                 end=mid-1; //function value ko return deta hai not print
                }
               
            }
            return ans;
            }

    int rightoccur(int arr[],int n,int key){

   int start=0,end=n-1;
   int ans=-1;//meaning if not get that key retun -1 but down as we see we found so store that key value
      while(start<=end){
        int mid=start+(end-start)/2;
        

           if(arr[mid]==key){//mid is inex not a value
             ans=mid;
             start=mid+1;

            }else if(key>arr[mid]){
                start=mid+1;
              }else{
                 end=mid-1; //function value ko return deta hai not print
                }
                
            }
           return ans;
         }


int main(){
int key=3;
int even[7]={1,2,3,3,3,4,5};

int num=leftoccur(even,7,key);
int nums=rightoccur(even,7,key);
cout<<"1 occurence of element at index "<<num<<endl;
cout<<"last occurence of element at index "<<nums<<endl;
 return 0;

}