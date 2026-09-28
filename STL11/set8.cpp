#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;

    s.insert(5);//only uniqur value is print repition not allowed
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(9);
    s.insert(9);
    s.insert(0);
    s.insert(0);
    for(auto i:s){
    cout<<i<<endl;
     }

     set<int>::iterator it =s.begin();//iterator name as -->it and start stati 0 index
     it++;// 1 increse kiya hence 2 elemt are deleted
     s.erase(it);//delete 
      for(auto i:s){
      cout<<i<<endl;
       }

       cout<<"any elemt present or not-->"<<s.count(5)<<endl;//--->T/F

      set<int>::iterator itr =s.find(5);//iterator name as -->itr and find if value prent there index value aslo give
      for(auto it=itr;it!=s.end();it++){
      cout<<*it<<" ";//it khud pointer so value nikalne ke le use ---derefernce
       }cout<<endl;

}