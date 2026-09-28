#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector <int> v){ 

    int s=0,e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;

    }
    return v;
}

//for print
void print(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){
        
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    vector<int> ans = reverse(v);           //cal reverse func and pass v which contain all value
    cout<<endl;
    print(ans);//call PRINT fun for 

     return 0;
}