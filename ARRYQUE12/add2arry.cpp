#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> add(int arr1[],int n,int arr2[],int m){

        int sum=0;  
        int carry=0;
        vector<int> ans;
        int i=n-1;
        int j=m-1;

//when both array value prenet same place par
      while(i>=0 && j>=0){
       sum=arr1[i] +arr2[j] +carry;

        int value=sum%10;
        carry=sum/10;
        ans.push_back(value);
        i--;
        j--;
    }

//when arrr1  value is greater then arr2 se  sum and carry ??
      while(i>=0){
         sum=arr1[i]+carry;

         int value=sum%10;
         carry=sum/10;
         ans.push_back(value);
         i--;

    }
    //when arr2 ke elemnt are gretere than arr1
  while(j>=0){
         sum=arr2[j]+carry;

         int value=sum%10;
        carry=sum/10;
         ans.push_back(value);
         j--;

    }

    while(carry!=0){
         sum=carry;

         int value=sum%10;
         carry=sum/10;
         ans.push_back(value);

    }
    reverse(ans.begin(),ans.end());//because peeche se add huva hai
    return ans;

}

int main(){

    int arr1[4]={2,4,6,8};
    int n=4;
    int arr2[2]={6,8};
    int m=2;

    vector<int> result= add(arr1,n,arr2,m);//we store ans in result me then print ka diya1

    for(int i = 0; i < result.size(); i++) {
       cout << result[i] << " ";
      }
      cout<<endl;

    return 0;
    
}