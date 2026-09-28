#include<iostream>
#include<list>//include libray
using namespace std;
int main(){

    list<int> l;//make list name is l
    
    list<int>n(5,100);//make new vector name is n ,and size is 5 and eaxch value is 100
    cout<<"print n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }


    l.push_front(2);
    l.push_back(1);
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());//erase first elmnbt )
    cout<<"after erase"<<endl;
    for(int i:l){
      cout<<i<<" ";
    }

    cout<<"size of list "<<l.size()<<endl;
}