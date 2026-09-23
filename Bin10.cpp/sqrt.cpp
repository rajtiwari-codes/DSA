#include<iostream>
using namespace std;

//s-1
long long int SQRTINTEGER(int n){
//if wed use int there range -2^31 to 2^31-1 so if any big no caone u do saqure they are aout of rannge that why  we use long long int
  int s=0,e=n-1;
   long long int ans=-1;
    while(s<=e){
    long long  int mid=s+(e-s)/2;

     long long int square=mid*mid;
      if(square==n){
        return mid;
      }else if(square>n){
        e=mid-1;
      }else{
        s=mid+1;
        ans=mid;
      }

    }
return ans;
}
//s-2
double moreprecise(int n,int precsion,int tempSol ){//get value
 double factor=1;
 double ans=tempSol;
  for(int i=0;i<precsion;i++){//loop calehga 0-->3 precison value

    factor=factor/10;
    for(double j=ans;j*j<n;j=j+factor){
      ans=j;
    }
  }
  return ans;
}

int main(){

    int n;
    cout<<"enetr the value of n"<<endl;
    cin>>n;
    int tempSol=SQRTINTEGER(n);//S-1 find intefer value 
    cout<<"answer is "<<moreprecise(n,3,tempSol)<<endl;//s-2 find deciamla value
    return 0;
}