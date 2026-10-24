//removwe all occurrence of a substring in a string
#include<iostream>
using namespace std;

string occur(string &s,string x){//&s ??becsue chneges are reflect in main()

    int index = s.find(x);
    while(index != string::npos) {  // jab tak substring milti rahe chalte raho
        s.erase(index, x.length()); // erase karo
        index = s.find(x);          // naya index dhundho
    }
}

int main(){

    string s= "daabcbaabcbc";
    string x="abc";
    occur(s,x);
    cout<<s<<endl;
    return 0;
}