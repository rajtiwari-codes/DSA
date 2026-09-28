#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
//we do BS so put value in sorted way
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);

    cout<<"finf 6-->"<<binary_search(v.begin(),v.end(),6)<<endl;//binar serch work only sorted 

      cout<<"lower bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
      cout<<"upper bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
       
int a=5;
int b=8;

cout<<"max "<<max(a,b);
cout<<"min "<<min(a,b);

swap(a,b);
cout<<endl<<"a is: "<<a<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"string is "<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate is "<<endl;
for(int i:v){
    cout<<i<<" ";
}





}
