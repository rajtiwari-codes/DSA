#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


    //find max and min no in a n arry

    int getMax(int num[],int n){//take array name and arry size

        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
            // if(num[i]>maxi){
            //     maxi=num[i];
            // }
            maxi=max(maxi,num[i]);//predefined function to find max and min vlaue
        }
        return maxi;
    }

     int getMin(int num[],int n){//take array name and arry size

        int mini=INT_MAX;

        
        for(int i=0;i<n;i++){
         mini=min(mini,num[i]);

            // if(num[i]<mini){
            //     mini=num[i];
            // }
        }
        return mini;
    }


int main(){
    int size;//declre 
    cin>>size;//sixe ko bataya
    int num[50];//store in put value which user can enyer

     for(int i=0;i<size;i++){
      cin>>num[i];//input all elment
        }
   
        cout<<"maximum value is"<<getMax(num,size)<<endl;
         cout<<"manimum value is"<<getMin(num,size)<<endl;
    return 0;
}