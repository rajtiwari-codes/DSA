#include<iostream>
using namespace std;

int getleng(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char a[], int start, int end) {
    while(start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
void operation(char a[],int n){
    int start=0;
    for(int i=0;i<=n;i++){
        if(a[i]==' '||a[i]=='\0'){
            reverse(a,start,i-1);
            start=i+1;//when the arry is rev after that aage wala ko do not that posituon
    }
}
}
int main(){

    char ch[50]="my name is raj";

    int len=getleng(ch);//to find the elenght
    reverse(ch, 0, len - 1);
    operation(ch,len);//call another fun contain logic ATQ

    cout<<ch<<endl;
    return 0;
}