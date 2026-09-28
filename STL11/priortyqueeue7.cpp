#include<iostream>
#include<queue>
using namespace std;
int main(){
//max heap made
    priority_queue<int> maxi;
    //mini heap
    priority_queue<int,vector<int>,greater<int> >mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";//each time we acees top elemnnt and next stepo bahr purt kar rahje hai
        maxi.pop();
    }cout<<endl;


    mini.push(6);
    mini.push(3);
    mini.push(0);
    mini.push(9);
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";//each time we acees top elemnnt and next stepo bahr purt kar rahje hai
        mini.pop();
    }cout<<endl;

    cout<<"empty or not "<<mini.empty()<<endl;

}