//remove space and put new string withoiut taking extra space
#include <iostream>
#include <string>
using namespace std;

string replaceSpaces(string &str) {
    int spaceCount = 0;
    
    // Step 1: Count spaces
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            spaceCount++;
        }
    }
    
    // Step 2: Calculate new size and resize string
    int i = str.length() - 1;
    int j = str.length() + (spaceCount * 2) - 1;
    str.resize(j + 1);
    
    // Step 3: Fill from the end
    while(i >= 0) {
        if(str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
        i--;
    }
    
    return str;
}

int main() {
    string str = "My Name is Raj";
    
    cout << "Original String: " << str << endl;
    
    string result = replaceSpaces(str);
    
    cout << "Modified String: " << result << endl;
    
    return 0;
}