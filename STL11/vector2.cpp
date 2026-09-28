#include<iostream>
#include<vector>//includde vector ki libraray
using namespace std;
int main(){

    vector<int>a(5,1);//make vector name is a size is 5 and each element assighn 1 value

    vector<int> last(a);//make a new vectoe name is last  put a ki value in that vector
    cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<<endl;
    }
    

    vector<int> v;//make a vestor steore it value name v not ddined size
    cout<<"Capacity---> "<<v.capacity()<<endl;//cpacity??total amont of memory a vector can alaocate

    v.push_back(1);//add value  1 in vector
     cout<<"Capacity---> "<<v.capacity()<<endl;//output 1 because we put 1 element 

      v.push_back(2);//add value  1 in vector
     cout<<"Capacity---> "<<v.capacity()<<endl;//output 2 because we put 2 element 

      v.push_back(3);//add value  1 in vector
     cout<<"Capacity---> "<<v.capacity()<<endl;//output 3 because we put 4 ??  beacuse vestor can double menoery  

     cout<<"elemnt at 2 index "<<v.at(2)<<endl;

     cout<<"front "<<v.front()<<endl;
     cout<<"back "<<v.back()<<endl;

    //delete from last 
     cout<<"before pop "<<endl;
     for(int i:v){//vector v me all acess
        cout<<i<<" ";
      }cout<<endl;

      v.pop_back();

       cout<<"after  pop "<<endl;
     for(int i:v){//vector v me all acess
        cout<<i<<" ";
      }cout<<endl;

      //clear vector? size 0 hoga not capacity

      cout<<"befor clear size "<<v.size()<<endl;
      v.clear();
      cout<<"after clear size "<<v.size()<<endl;

}