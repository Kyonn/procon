#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y){
    if(x < y) swap(x, y);
    if(y == 0) return x;

    return gcd(x%y, y);
}

int main() {
    int N; cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int L[N], R[N], X[N];
    L[0] = A[0]; R[N-1] = A[N-1];
    for(int i = 1; i < N; i++) {
        L[i] = gcd(L[i-1], A[i]);
    }
    for(int i = N-2; i >= 0; i--) {
        R[i] = gcd(R[i+1], A[i]);
    }
    
    X[0] = R[1]; X[N-1] = L[N-2];
    for(int i = 1; i < N-1; i++) {
        X[i] = gcd(L[i-1], R[i+1]);
    }

    int ans = X[0];
    for(int i = 0; i < N; i++) {
        ans = max(ans, X[i]);
    }

    cout << ans << endl;

    return 0;
}