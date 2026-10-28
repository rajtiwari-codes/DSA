#include<iostream>
#include<algorithm>
using namespace std;

bool permu(string s1,string s2){

    if(s1.length()>s2.length()){
        return false;
    }

    sort(s1.begin(),s1.end());
    for(int i=0;i<=s2.length()-s1.length();i++){
        string sub=s2.substr(i,s1.length());
         sort(sub.begin(),sub.end());
         
         if(s1==sub){
        return true;
    }
    
    }
    return false;
}
int main(){
    string s1="ab";
    string s2="eidbaooo";

    cout<<permu(s1,s2);
    return 0;
}