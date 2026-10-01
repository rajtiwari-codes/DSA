//check palinfrme??  

//case-1) sensitive nii hai case?? all present either UC or LC
//case-2)ignore symaol and empty space

#include<iostream>
using namespace std;

int getlength(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;

}
char tolowercase(char ch){//ch array ka name hai and n --->size
   
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else if(ch>='A' && ch<='Z'){
            return ch-'A'+'a';
        }else{
            return ch;//digit symbole saoace return do
    }
}
bool isvalid(char ch){
    if((ch>='a' && ch<='z')||
    (ch>='A' && ch<='Z')||
    (ch>='0' && ch<='9')){

     return true;
    }
   return false;
}

//s-1
bool checkpalin(char ch[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(!isvalid(ch[s])){
            s++;
            continue;
        };
        if(!isvalid(ch[e])){
            e--;
            continue;
        };
        if(tolowercase(ch[s])!=tolowercase(ch[e])){
            return false;
        }else{
            s++;
            e--;
        }

    }
    return true;
}

int main(){

char name[50];
cout<<"enetr the name"<<endl;
cin.getline(name,50);//to get spaxce input

int len=getlength(name);//to find length of string
 
if(checkpalin(name,len)){
    cout<<"palindrome hai"<<endl;
}else{
    cout << "Not Palindrome" << endl;
}

    return 0;
}