#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N; cin >> N;
    vector<long long> X(5);
    for(int i = 0; i < 5; i++) {
        cin >> X[i];
    }
    sort(X.begin(), X.end());

    long long ans = ceil((long double)N / X[0]) + 4;
    cout << ans << endl;

    return 0;
}