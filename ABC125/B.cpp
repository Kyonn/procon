#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    int V[N], C[N];
    int ans = 0;

    for(int i = 0; i < N; i++){
        cin >> V[i];
    }
    for(int i = 0; i < N; i++){
        cin >> C[i];
    }
    for(int i = 0; i < N; i++) {
        if(V[i] > C[i]){
            ans += V[i] - C[i];
        }
    }

    cout << ans << endl; 

    return 0;
}
