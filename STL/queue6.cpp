#include<iostream>
#include<queue>
using namespace std;
int main(){

queue<string> q;
q.push("raj");//1 elemnt put--last me out
q.push("tiwari");
q.push("cahamp");//last put pahale out

cout<<"size before pop"<<q.size()<<endl;

cout<<"first elemnt "<<q.front()<<endl;
q.pop();

cout<<"first element "<<q.front()<<endl;

cout<<"size of pop "<<q.size()<<endl;

}