#include<iostream>
using namespace std;

char maxOccurCh(string s){
    int arr[26]={0};

    // create an array count occunrence
    for(int i=0;i<s.length();i++){//all alemnt acess
      char ch=s[i];//string value store in character--0->a and 1->b

      int number=0;//count reption whuich are i itilse 0

      number=ch-'a';
      arr[number]++;


    }
//find maximum occurence charter
int maxi=-1,ans=0;
for(int i=0;i<26;i++){
    if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
    }
}
return 'a'+ans;//convert the string in alpha

}


int main(){
    string s;
    cin>>s;

    cout<<maxOccurCh(s)<<endl;
    return 0;
}