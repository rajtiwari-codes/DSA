#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[], int n, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];   // pehli cow pehle stall pe fixed kiya

    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            lastPos = stalls[i];
            if(cowCount == k) {
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int n, int k) {
    sort(stalls, stalls + n);   // pehle sort karo

    int s = 1;
    int e = stalls[n-1] - stalls[0];   // max - min
    int ans = -1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(isPossible(stalls, n, k, mid)) {
            ans = mid;
            s = mid + 1;   // maximize karna hai, toh right jao
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int stalls[5] = {4, 2, 1, 3, 6};
    int n = 5;
    int k = 2;   // 2 cows

    cout << aggressiveCows(stalls, n, k) << endl;
    return 0;
}