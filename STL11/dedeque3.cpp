#include<iostream>
#include<deque>//access deque library
using namespace std;
int main(){

    deque<int> d;//make deque name is a and type int

    d.push_front(2);//1)add elemnt value 2 in front 
    d.push_back(1);
     for(int i:d){//acees 
        cout<<i<<endl;//print 
      }

      d.pop_front();//2)delete front elemnt -->o/p is 1 bescuse 2 is delete
      cout<<endl;
       for(int i:d){
        cout<<i<<" ";
      }

      cout<<"print first element "<<d.at(0)<<endl;

      cout<<"front "<<d.front()<<endl;
       cout<<"back "<<d.back()<<endl;

       cout<<"empty "<<d.empty()<<endl;

        cout<<"before earse "<<d.size()<<endl;//for detetion bro
        d.erase(d.begin(),d.begin()+1);//which elemnt strat and which elemnt ko delete 
         cout<<"after erarse "<<d.size()<<endl;
         for(int i:d){
            cout<<i<<endl;
         }
}