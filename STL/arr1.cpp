#include<iostream>
#include<array>//stl arr whivh contain libreay-->give all prorty of array 
using namespace std;
int main(){

    int noramal[3]={3,4,6};//normal array

    array<int,4> a={3,5,79,4};//value put integaer sixe 4 and the name is a of arry 

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at 2 index "<<a.at(3)<<endl;
     cout<<"empty or not "<<a.empty()<<endl;
     cout<<"element at 2 index "<<a.at(3)<<endl;
    cout<<"element at 2 index "<<a.at(3)<<endl;
}