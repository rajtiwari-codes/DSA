#include<iostream>
#include<map>
using namespace std;
int main(){

    map<int,string> m;

    m[1]="raj";//value store in key value pair not 1 rep index
    m[13]="tiwar";
    m[17]="bob";
    m.insert({5,"eve"});//another method  putting value

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finfing the value"<<m.count(13)<<endl;

    m.erase(13);
    
    cout<<"after  erase"<<endl;
    for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it=m.find(1);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}