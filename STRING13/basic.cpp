#include<iostream> 
using namespace std;

char toLowerCase(char ch) {//sting to lower case
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';//convert in lower case
        return temp;
    }
}
//check palondrome when upper and lower has CASE SENSITIVE

bool checkPalindrome(char a[], int n) {//pass array and there size
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )//all convert in lower case 
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {//to find length of string using logic  null charcter 
        count++;
    }

    return count;
}



int main( ) {

    char name[20];//take input as a charter

    cout << "Enter your name " << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);//call lenght function
    cout << " Length: " << len << endl;

    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;

    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;

    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;//convert in lower case
    

  
    return 0;
}