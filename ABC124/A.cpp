#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ans = (A == B) ? 2 * A : 2 * max(A , B) - 1;
    
    cout << ans << endl;

    return 0;
}