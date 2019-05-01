#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> T(5);
    int min_T = 999;
    int ans = 0;
    for(int i = 0; i < 5; i++) {
        cin >> T[i];
        if(T[i]%10 != 0) {
            if(T[i]%10 <= min_T%10) min_T = T[i];
        }
        ans += ((T[i]+9) / 10) * 10 ;
    }
    if(min_T != 999) ans -= 10 - min_T%10;

    cout << ans << endl;


    return 0;
}