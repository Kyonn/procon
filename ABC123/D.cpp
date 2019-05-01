#include <bits/stdc++.h>

using namespace std;

int main() {
    int X, Y, Z, K; cin >> X >> Y >> Z >> K;
    vector<long long> A(X), B(Y), C(Z);
    for(int i = 0; i < X; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < Y; i++) {
        cin >> B[i];
    }
    for(int i = 0; i < Z; i++) {
        cin >> C[i];
    }

    vector<long long> D(X*Y);   
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            D.push_back(A[i]+B[j]);
        }
    }
    sort(D.begin(), D.end(), greater<long long>());

    vector<long long> E(Z); 
    for(int i = 0; i < K; i++) {
        for(int j = 0; j < Z; j++) {
            E.push_back(D[i]+C[j]);
        }
    }
    sort(E.begin(), E.end(), greater<long long>());

    for(int i = 0; i < K; i++) {
        cout << E[i] << endl;
    }

    return 0;
}