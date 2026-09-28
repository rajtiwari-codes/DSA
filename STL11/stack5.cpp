#include<iostream>
#include<stack>
using namespace std;
int main(){

stack<string> s;
s.push("raj");//1 elemnt put--last me out
s.push("tiwari");
s.push("cahamp");//last put pahale out

cout<<"top elemnt--->"<<s.top()<<endl;

s.pop();

cout<<"top elemnt--->"<<s.top()<<endl;

cout<<"size of staxk"<<s.size()<<endl;

cout<<"emptyor not"<<s.empty()<<endl;

}