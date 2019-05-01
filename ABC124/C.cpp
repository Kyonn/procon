#include <bits/stdc++.h>

using namespace std;

int main() {
    string S; cin >> S;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < S.length(); i++) {
        if(S[i] - '0' == i % 2) cnt1++;
        else cnt2++;
    }

    cout << min(cnt1, cnt2) << endl;
    return 0;
}