//remove all adjavcent duplicate in a string
#include<iostream>
using namespace std;

string removeDuplicates(string s) {
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        if(!ans.empty() && ans.back() == s[i]) {
            ans.pop_back();
        } else {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main() {
    string s = "abbaca";
    cout << removeDuplicates(s) << endl; // Output: "ca"
    return 0;
}